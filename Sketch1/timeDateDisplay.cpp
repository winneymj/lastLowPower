#include <stdint.h>
#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#include <Time.h>         //http://www.arduino.cc/playground/Code/Time
#include <TimeLib.h>         //http://www.arduino.cc/playground/Code/Time
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>
#include <DS3232RTC.h>    // http://github.com/JChristensen/DS3232RTC
#include "defs.h"
#include "stringUtils.h"
#include "timeDateDisplay.h"

timeDateDisplay::timeDateDisplay(Adafruit_SharpMem& display) : _invert(false), _display(display), _font(NULL)
{
}

void timeDateDisplay::setFont(const GFXfont* font)
{
	_font = font;	
}

void timeDateDisplay::setDateFont(const GFXfont* font)
{
	_dateFont = font;
}

void timeDateDisplay::setTempFont(const GFXfont* font)
{
	_tempFont = font;
}

void timeDateDisplay::setTempDegreeFont(const GFXfont* font)
{
	_tempDegreeFont = font;
}

void timeDateDisplay::setTempType(eTempConversion type)
{
	_tempType = type;
}

void timeDateDisplay::invert(bool invert)
{
	_invert = invert;
}

void timeDateDisplay::displayLongDate(tmElements_t currTime)
{
	_display.setTextSize(1);
	_display.setFont(_dateFont);
	_display.setTextColor(_invert ? WHITE: BLACK, _invert ? BLACK : WHITE);

	char timeBuff[32] = {0};
	sprintf_P(timeBuff, PSTR("%s %u, %u"), months[currTime.Month], currTime.Day, currTime.Year + 2000);

	_display.setCursor(64, 60);
	stringUtils::printCenterString(_display, _invert, timeBuff);
}

void timeDateDisplay::displayTime(tmElements_t currTime)
{
	_display.setTextSize(1);
	_display.setFont(_font);
	_display.setTextColor(_invert ? WHITE: BLACK, _invert ? BLACK : WHITE);
	
	char timeBuff[6] = {0};
#ifdef EVERY_SECOND
	sprintf_P(timeBuff, PSTR("%02u:%02u"), currTime.Hour, currTime.Second);
#endif
#ifdef EVERY_MINUTE
	sprintf_P(timeBuff, PSTR("%02u:%02u"), currTime.Hour, currTime.Minute);
#endif

	_display.setCursor(10, 49);
	_display.print(timeBuff);
}

void timeDateDisplay::displayDateTime(tmElements_t currTime)
{
	// Clear down entire screen
	_display.fillRect(0, 0, _display.width(), _display.height() / 2, _invert ? BLACK : WHITE);

	displayTime(currTime);
	displayLongDate(currTime);
}

void timeDateDisplay::displayLocalTemp(float temp)
{
	_display.setTextSize(1);
	_display.setFont(_tempFont);
	_display.setTextColor(_invert ? WHITE: BLACK, _invert ? BLACK : WHITE);

	_display.setCursor(75, 8);
	char tempBuff[8] = {0};
	sprintf_P(tempBuff, PSTR("%d.%02d"), (int)temp, (int)(temp * 100.0) % 100);
	_display.print(tempBuff);

	_display.setFont(_tempDegreeFont);
	_display.print((char)0xB0);

	_display.setFont(_tempFont);
	_display.print((_tempType == fahrenheit) ? 'F' : 'C');
}


void timeDateDisplay::displayTemp(float temp)
{
	displayTemp((_tempType == fahrenheit) ? CtoF(temp) : temp);
}
