/*
 * menu.cpp
 *
 * Created: 1/22/2018 6:42:10 PM
 *  Author: dell
 */ 
#include <stdint.h>
#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>
#include <Watch_Menu.h>

#include "defs.h"
#include "icons.h"
#include "MainMenu.h"
#include "TimeSettingsMenu.h"
#include "DateSettingsMenu.h"
#include "InvertSettingsMenu.h"
#include "CalendarSettingsMenu.h"
#include "cour6pt7b.h"
#include "GlobalSettings.h"

// Externals
extern long keyPressTimeStamp;
extern eTempConversion tempType;
extern boolean pinValM;
extern boolean pinValD;
extern boolean pinValU;
extern Adafruit_SharpMem display;
extern void switchTemp();


s_menuNowSetting MainMenu::_setting;
WatchMenu *MainMenu::_menu = nullptr;
WatchMenu *MainMenu::_currentMenu = nullptr;
bool MainMenu::_menuExit = false;

void MainMenu::initialize()
{
	if (nullptr == _menu)
	{
		_menu = new WatchMenu(display);
		_menu->initMenu(3);  // Create a menu system with 3 menu rows
		_currentMenu = _menu;
	}

	_menu->setTextSize(1);
	_menu->setFont(&cour6pt7b);

	// Top level menu
	_menu->createMenu(MENU_MAIN_INDEX, 3, PSTR("<MAIN MENU>"), MENU_TYPE_ICON, MainMenu::menuDownFunc, MainMenu::menuUpFunc);
	_menu->createOption(MENU_MAIN_INDEX, OPT_DATE_TIME_INDEX, PSTR("Date & Time"), menu_datetimeBitmaps, (uint8_t)MENU_DATETIME_INDEX);
	_menu->createOption(MENU_MAIN_INDEX, OPT_SETTINGS_INDEX, PSTR("Settings"), menu_settingsBitmaps, (uint8_t)MENU_SETTINGS_INDEX);
	_menu->createOption(MENU_MAIN_INDEX, OPT_EXIT_INDEX, PSTR("Exit"), menu_exitBitmaps, MainMenu::exitMenu);

	// Create sub menu for date & time
	_menu->createMenu(MENU_DATETIME_INDEX, 3, PSTR("<DATE & TIME>"), MENU_TYPE_ICON, MainMenu::menuDownFunc, MainMenu::menuUpFunc);
	_menu->createOption(MENU_DATETIME_INDEX, OPT_DATE_INDEX, PSTR("Date"), menu_calendarBitmaps, DateSettingsMenu::dateFunc);
	_menu->createOption(MENU_DATETIME_INDEX, OPT_TIME_INDEX, PSTR("Time"), menu_clockBitmaps, TimeSettingsMenu::timeFunc);
	_menu->createOption(MENU_DATETIME_INDEX, OPT_DATE_TIME_EXIT_INDEX, PSTR("Exit"), menu_exitBitmaps, (uint8_t)MENU_MAIN_INDEX);
	
	// Create sub menu for settings
	_menu->createMenu(MENU_SETTINGS_INDEX, 4, PSTR("<SETTINGS>"), MENU_TYPE_ICON, MainMenu::menuDownFunc, MainMenu::menuUpFunc);
	_menu->createOption(MENU_SETTINGS_INDEX, OPT_INVERT_INDEX, PSTR("Invert"), menu_invertBitmaps, InvertSettingsMenu::invertFunc);
	_menu->createOption(MENU_SETTINGS_INDEX, OPT_TEMPERATURE_INDEX, PSTR("Temperature"), (tempType == centigrade) ? menu_celciusBitmaps : menu_fahrenheitBitmaps, switchTemp);
	_menu->createOption(MENU_SETTINGS_INDEX, OPT_CALENDAR_INDEX, PSTR("Calendar"), menu_calendarBitmaps, CalendarSettingsMenu::calendarFunc);
	_menu->createOption(MENU_SETTINGS_INDEX, OPT_SETTINGS_EXIT_INDEX, PSTR("Exit"), menu_exitBitmaps, (uint8_t)MENU_MAIN_INDEX);
}

//----------------------------------------------------------------
// Method display the main menu and enters a loop checking for key
// presses and passing them onto the menu display code.
// If no keys are pressed for the ACTIVITY_TIMEOUT then the loop
// exits.
//----------------------------------------------------------------
void MainMenu::draw()
{
	_menuExit = false;
	
	// get the current time in millis
	long pressStart = millis();
	
	while(!_menuExit)
	{
//		delay(10);
//		rtcRead = !rtcRead;

		// Clear bottom of screen
		display.fillRect(0, 64, 128, 128, GlobalSettings::_inverted ? BLACK : WHITE);
		bool animating = _currentMenu->updateMenu();
		display.refresh();

		while (animating)
		{
			// Clear bottom of screen
			display.fillRect(0, 64, 128, 128, GlobalSettings::_inverted ? BLACK : WHITE);
			animating = _currentMenu->updateMenu();
			display.refresh();
//			delay(20);
		}
		
		if (pinValM)
		{
			int8_t buttonState = digitalRead(MBUT);
			// Button still pressed.
			if (buttonState)
			{
				pinValM = false;
				pressStart = millis();    // Reset the idle as we had a keypress
				_currentMenu->selectOption();
			}
		}

		if (pinValD)
		{
			int8_t buttonState = digitalRead(DBUT);
			// Button still pressed.
			if (buttonState)
			{
				pinValD = false;
				pressStart = millis();    // Reset the idle as we had a keypress
				_currentMenu->menuDown();
			}
		}
		
		if (pinValU)
		{
			int8_t buttonState = digitalRead(UBUT);
			// Button still pressed.
			if (buttonState)
			{
				pinValU = false;
				pressStart = millis();  // Reset the idle as we had a keypress
				_currentMenu->menuUp();
			}
		}

		// See if inactive and get out.
		long inactiveTimer = millis() - pressStart;
		if (inactiveTimer > INACTIVITY)
		{
			exitMenu();
		}
	}// while

	// Exiting the menu so reset back to default.
	_menu->resetMenu();
	_menuExit = false;
}

void MainMenu::exitMenu()
{
	// Clear down bottom of the screen
	display.fillRect(0, 64, 128, 128, GlobalSettings::_inverted ? BLACK : WHITE);
	display.refresh();
	
	// Set flag to make sure we exit the while loop.
	_menuExit = true;
}

void MainMenu::menuDownFunc()
{
	_menu->downOption();
}

void MainMenu::menuUpFunc()
{
	_menu->upOption();
}


/*************REMOVE THESE ***********************/
void switchTemp()
{
}

eTempConversion tempType;

