
#ifndef _ICONS_H
#define _ICONS_H

#include <stdint.h>
#if ARDUINO >= 100
#include "Arduino.h"
#define WIRE_WRITE Wire.write
#else
#include "WProgram.h"
#define WIRE_WRITE Wire.send
#endif

//
//  Image data for menu_exit
//
// Bitmap sizes for menu_exit
const uint8_t menu_exitWidthPixels = 32;
const uint8_t menu_exitHeightPixels = 32;
const uint8_t menu_exitBitmaps[] PROGMEM =
{
	0x00, 0x00, 0x00, 0x00, //
	0x00, 0x00, 0x00, 0x00, //
	0x00, 0x00, 0x07, 0xFE, //                      ##########
	0x00, 0x00, 0x07, 0xFE, //                      ##########
	0x0F, 0xFF, 0xC7, 0xFE, //     ##############   ##########
	0x1F, 0xFF, 0xC0, 0x7E, //    ###############       ######
	0x1F, 0xFF, 0xC0, 0xFE, //    ###############      #######
	0x1C, 0x00, 0x01, 0xEE, //    ###                 #### ###
	0x1C, 0x00, 0x03, 0xCE, //    ###                ####  ###
	0x1C, 0x00, 0x07, 0x8E, //    ###               ####   ###
	0x1C, 0x00, 0x0F, 0x0E, //    ###              ####    ###
	0x1C, 0x00, 0x1E, 0x00, //    ###             ####
	0x1C, 0x00, 0x3C, 0x00, //    ###            ####
	0x1C, 0x00, 0x78, 0x00, //    ###           ####
	0x1C, 0x00, 0xF0, 0x00, //    ###          ####
	0x1C, 0x01, 0xE0, 0x00, //    ###         ####
	0x1C, 0x01, 0xC0, 0x38, //    ###         ###        ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1C, 0x00, 0x00, 0x38, //    ###                    ###
	0x1F, 0xFF, 0xFF, 0xF8, //    ##########################
	0x1F, 0xFF, 0xFF, 0xF8, //    ##########################
	0x0F, 0xFF, 0xFF, 0xF0, //     ########################
	0x00, 0x00, 0x00, 0x00, //
	0x00, 0x00, 0x00, 0x00, //
	0x00, 0x00, 0x00, 0x00, //
	0x00, 0x00, 0x00, 0x00, //
};

//
//  Image data for clock
//
// Bitmap sizes for clock
const uint8_t clockWidthPixels = 32;
const uint8_t clockHeightPixels = 32;
const uint8_t menu_clockBitmaps[] PROGMEM =
{
	0x00, 0x0F, 0xF0, 0x00, //             ########
	0x00, 0x7F, 0xFE, 0x00, //          ##############
	0x00, 0xFF, 0xFF, 0x00, //         ################
	0x03, 0xF8, 0x1F, 0xC0, //       #######      #######
	0x07, 0xC0, 0x03, 0xE0, //      #####            #####
	0x0F, 0x00, 0x00, 0xF0, //     ####                ####
	0x1E, 0x00, 0x00, 0x78, //    ####                  ####
	0x1C, 0x01, 0xC0, 0x3C, //    ###         ###        ####
	0x38, 0x01, 0xC0, 0x1C, //   ###          ###         ###
	0x78, 0x01, 0xC0, 0x1E, //  ####          ###         ####
	0x70, 0x01, 0xC0, 0x0E, //  ###           ###          ###
	0x70, 0x01, 0xC0, 0x0E, //  ###           ###          ###
	0xF0, 0x01, 0xC0, 0x0F, // ####           ###          ####
	0xE0, 0x01, 0xC0, 0x07, // ###            ###           ###
	0xE0, 0x01, 0xC0, 0x07, // ###            ###           ###
	0xE0, 0x01, 0xFF, 0xC7, // ###            ###########   ###
	0xE0, 0x01, 0xFF, 0xC7, // ###            ###########   ###
	0xE0, 0x01, 0xFF, 0xC7, // ###            ###########   ###
	0xE0, 0x00, 0x00, 0x07, // ###                          ###
	0xF0, 0x00, 0x00, 0x0F, // ####                        ####
	0x70, 0x00, 0x00, 0x0E, //  ###                        ###
	0x70, 0x00, 0x00, 0x0E, //  ###                        ###
	0x78, 0x00, 0x00, 0x1E, //  ####                      ####
	0x38, 0x00, 0x00, 0x1C, //   ###                      ###
	0x1C, 0x00, 0x00, 0x3C, //    ###                    ####
	0x1E, 0x00, 0x00, 0x78, //    ####                  ####
	0x0F, 0x00, 0x00, 0xF0, //     ####                ####
	0x07, 0xC0, 0x03, 0xE0, //      #####            #####
	0x03, 0xF8, 0x1F, 0xC0, //       #######      #######
	0x01, 0xFF, 0xFF, 0x80, //        ##################
	0x00, 0x7F, 0xFE, 0x00, //          ##############
	0x00, 0x0F, 0xF0, 0x00, //             ########
};

//
//  Image data for invert
//

// Bitmap sizes for invert
const uint8_t invertWidthPixels = 32;
const uint8_t invertHeightPixels = 32;
const uint8_t menu_invertBitmaps[] PROGMEM =
{
	0x00, 0x0F, 0xF0, 0x00, //             ########
	0x00, 0x7F, 0xFE, 0x00, //          ##############
	0x00, 0xFF, 0xFF, 0x00, //         ################
	0x03, 0xF8, 0x1F, 0xC0, //       #######      #######
	0x07, 0xC7, 0x83, 0xE0, //      #####   ####     #####
	0x0F, 0x7F, 0x80, 0xF0, //     #### ########       ####
	0x1E, 0xFE, 0x00, 0x78, //    #### #######          ####
	0x1D, 0xFD, 0xC0, 0x3C, //    ### ####### ###        ####
	0x3B, 0xFD, 0xC0, 0x1C, //   ### ######## ###         ###
	0x7B, 0xFD, 0xC0, 0x1E, //  #### ######## ###         ####
	0x77, 0xFD, 0xC0, 0x0E, //  ### ######### ###          ###
	0x77, 0xFD, 0xC0, 0x0E, //  ### ######### ###          ###
	0xF7, 0xFD, 0xC0, 0x0F, // #### ######### ###          ####
	0xEF, 0xFD, 0xC0, 0x07, // ### ########## ###           ###
	0xEF, 0xFD, 0xC0, 0x07, // ### ########## ###           ###
	0xEF, 0xFD, 0xFF, 0xC7, // ### ########## ###########   ###
	0xEF, 0xFD, 0xFF, 0xC7, // ### ########## ###########   ###
	0xEF, 0xFD, 0xFF, 0xC7, // ### ########## ###########   ###
	0xEF, 0xFE, 0x00, 0x07, // ### ###########              ###
	0xF7, 0xFF, 0x80, 0x0F, // #### ############           ####
	0x77, 0xFF, 0x80, 0x0E, //  ### ############           ###
	0x77, 0xFF, 0x80, 0x0E, //  ### ############           ###
	0x7B, 0xFF, 0x80, 0x1E, //  #### ###########          ####
	0x3B, 0xFF, 0x80, 0x1C, //   ### ###########          ###
	0x1D, 0xFF, 0x80, 0x3C, //    ### ##########         ####
	0x1E, 0xFF, 0x80, 0x78, //    #### #########        ####
	0x0F, 0x7F, 0x80, 0xF0, //     #### ########       ####
	0x07, 0xC7, 0x83, 0xE0, //      #####   ####     #####
	0x03, 0xF8, 0x1F, 0xC0, //       #######      #######
	0x01, 0xFF, 0xFF, 0x80, //        ##################
	0x00, 0x7F, 0xFE, 0x00, //          ##############
	0x00, 0x0F, 0xF0, 0x00, //             ########
};

// Bitmap sizes for settings
const uint8_t menu_settingsWidthPixels = 32;
const uint8_t menu_settingsHeightPixels = 32;
const uint8_t menu_settingsBitmaps[] PROGMEM =
{
	0x00, 0x00, 0x00, 0xC0, //                         ##
	0x00, 0x00, 0x04, 0xC8, //                      #  ##  #
	0x00, 0x00, 0x0F, 0xFC, //                     ##########
	0x00, 0x00, 0x07, 0xF8, //                      ########
	0x00, 0x00, 0x07, 0x38, //                      ###  ###
	0x00, 0x00, 0x1E, 0x1E, //                    ####    ####
	0x00, 0x00, 0x1E, 0x1E, //                    ####    ####
	0x00, 0x00, 0x07, 0x38, //                      ###  ###
	0x00, 0x00, 0x07, 0xF8, //                      ########
	0x00, 0x78, 0x0F, 0xFC, //          ####       ##########
	0x18, 0x78, 0x64, 0xC8, //    ##    ####    ##  #  ##  #
	0x3C, 0xFC, 0xF0, 0xC0, //   ####  ######  ####    ##
	0x7F, 0xFF, 0xF8, 0x00, //  ####################
	0x7F, 0xFF, 0xF8, 0x00, //  ####################
	0x3F, 0xFF, 0xF0, 0x00, //   ##################
	0x1F, 0xFF, 0xE0, 0x00, //    ################
	0x1F, 0xFF, 0xE0, 0x00, //    ################
	0x3F, 0x87, 0xF0, 0x00, //   #######    #######
	0xFF, 0x03, 0xFC, 0x00, // ########      ########
	0xFF, 0x03, 0xFC, 0x00, // ########      ########
	0xFF, 0x03, 0xFC, 0x00, // ########      ########
	0xFF, 0x03, 0xFC, 0x00, // ########      ########
	0x3F, 0x87, 0xF0, 0x00, //   #######    #######
	0x1F, 0xFF, 0xE0, 0x00, //    ################
	0x1F, 0xFF, 0xE0, 0x00, //    ################
	0x3F, 0xFF, 0xF0, 0x00, //   ##################
	0x7F, 0xFF, 0xF8, 0x00, //  ####################
	0x7F, 0xFF, 0xF8, 0x00, //  ####################
	0x3C, 0xFC, 0xF0, 0x00, //   ####  ######  ####
	0x18, 0x78, 0x60, 0x00, //    ##    ####    ##
	0x00, 0x78, 0x00, 0x00, //          ####
	0x00, 0x00, 0x00, 0x00, //
};

//
//  Image data for datetime
//

// Bitmap sizes for datetime
const uint8_t menu_datetimeWidthPixels = 32;
const uint8_t menu_datetimeHeightPixels = 32;
const uint8_t menu_datetimeBitmaps[] PROGMEM =
{
	0x08, 0x04, 0x02, 0x00, //     #        #        #
	0x1C, 0x0E, 0x07, 0x00, //    ###      ###      ###
	0x1D, 0xEE, 0xF7, 0x00, //    ### #### ### #### ###
	0x5D, 0xEE, 0xF7, 0x40, //  # ### #### ### #### ### #
	0xDD, 0xEE, 0xF7, 0x60, // ## ### #### ### #### ### ##
	0xC9, 0xE4, 0xF2, 0x60, // ##  #  ####  #  ####  #  ##
	0xE3, 0xF1, 0xF8, 0xE0, // ###   ######   ######   ###
	0xFF, 0xFF, 0xFF, 0xE0, // ###########################
	0xFF, 0xFF, 0xFF, 0xE0, // ###########################
	0xC0, 0x00, 0x00, 0x60, // ##                       ##
	0xC0, 0x77, 0x77, 0x60, // ##       ### ### ### ### ##
	0xC0, 0x77, 0x77, 0x60, // ##       ### ### ### ### ##
	0xC0, 0x77, 0x77, 0x60, // ##       ### ### ### ### ##
	0xC0, 0x00, 0x00, 0x60, // ##                       ##
	0xC7, 0x77, 0x77, 0x60, // ##   ### ### ### ### ### ##
	0xC7, 0x77, 0x60, 0x60, // ##   ### ### ### ##      ##
	0xC7, 0x77, 0x4F, 0xF0, // ##   ### ### ### #  ########
	0xC0, 0x00, 0x1F, 0xF8, // ##                 ##########
	0xC7, 0x77, 0x38, 0x1C, // ##   ### ### ###  ###      ###
	0xC7, 0x77, 0x71, 0x8E, // ##   ### ### ### ###   ##   ###
	0xC7, 0x76, 0x61, 0x86, // ##   ### ### ##  ##    ##    ##
	0xC0, 0x00, 0xC1, 0x83, // ##              ##     ##     ##
	0xE0, 0x00, 0xC1, 0x83, // ###             ##     ##     ##
	0x7F, 0xFF, 0xC1, 0xFB, //  #################     ###### ##
	0x3F, 0xFF, 0xC1, 0xFB, //   ################     ###### ##
	0x00, 0x00, 0xC0, 0x03, //                 ##            ##
	0x00, 0x00, 0xC0, 0x03, //                 ##            ##
	0x00, 0x00, 0x60, 0x06, //                  ##          ##
	0x00, 0x00, 0x70, 0x0E, //                  ###        ###
	0x00, 0x00, 0x38, 0x1C, //                   ###      ###
	0x00, 0x00, 0x1F, 0xF8, //                    ##########
	0x00, 0x00, 0x07, 0xE0, //                      ######
};

//
//  Image data for calendar32x32
//

// Bitmap sizes for calendar
const uint8_t menu_calendarWidthPixels = 32;
const uint8_t menu_calendarHeightPixels = 32;
const uint8_t menu_calendarBitmaps[] PROGMEM =
{
	0x03, 0x01, 0x80, 0xC0, //       ##       ##       ##
	0x07, 0x83, 0xC1, 0xE0, //      ####     ####     ####
	0x07, 0x83, 0xC1, 0xE0, //      ####     ####     ####
	0x77, 0xBB, 0xDD, 0xEE, //  ### #### ### #### ### #### ###
	0xF7, 0xBB, 0xDD, 0xEF, // #### #### ### #### ### #### ####
	0xF7, 0xBB, 0xDD, 0xEF, // #### #### ### #### ### #### ####
	0xF3, 0x39, 0x9C, 0xCF, // ####  ##  ###  ##  ###  ##  ####
	0xF8, 0x7C, 0x3E, 0x1F, // #####    #####    #####    #####
	0xFF, 0xFF, 0xFF, 0xFF, // ################################
	0xFF, 0xFF, 0xFF, 0xFF, // ################################
	0xFF, 0xFF, 0xFF, 0xFF, // ################################
	0xF0, 0x00, 0x00, 0x0F, // ####                        ####
	0xF0, 0x1E, 0x79, 0xEF, // ####       ####  ####  #### ####
	0xF0, 0x1E, 0x79, 0xEF, // ####       ####  ####  #### ####
	0xF0, 0x1E, 0x79, 0xEF, // ####       ####  ####  #### ####
	0xF0, 0x1E, 0x79, 0xEF, // ####       ####  ####  #### ####
	0xF0, 0x00, 0x00, 0x0F, // ####                        ####
	0xF7, 0x9E, 0x79, 0xEF, // #### ####  ####  ####  #### ####
	0xF7, 0x9E, 0x79, 0xEF, // #### ####  ####  ####  #### ####
	0xF7, 0x9E, 0x79, 0xEF, // #### ####  ####  ####  #### ####
	0xF7, 0x9E, 0x79, 0xEF, // #### ####  ####  ####  #### ####
	0xF0, 0x00, 0x00, 0x0F, // ####                        ####
	0xF7, 0x9E, 0x78, 0x0F, // #### ####  ####  ####       ####
	0xF7, 0x9E, 0x78, 0x0F, // #### ####  ####  ####       ####
	0xF7, 0x9E, 0x78, 0x0F, // #### ####  ####  ####       ####
	0xF7, 0x9E, 0x78, 0x0F, // #### ####  ####  ####       ####
	0xF0, 0x00, 0x00, 0x0F, // ####                        ####
	0xF8, 0x00, 0x00, 0x1F, // #####                      #####
	0xFF, 0xFF, 0xFF, 0xFF, // ################################
	0xFF, 0xFF, 0xFF, 0xFF, // ################################
	0x7F, 0xFF, 0xFF, 0xFE, //  ##############################
	0x1F, 0xFF, 0xFF, 0xF8, //    ##########################
};

//
//  Image data for fahrenheit
//

// Bitmap sizes for fahrenheit
const uint8_t menu_fahrenheitWidthPixels = 32;
const uint8_t menu_fahrenheitHeightPixels = 32;
const uint8_t menu_fahrenheitBitmaps[] PROGMEM =
{
	0x0F, 0x81, 0xC0, 0x00, //     #####      ###
	0x1F, 0xC3, 0xE0, 0x00, //    #######    #####
	0x38, 0xE3, 0x60, 0x00, //   ###   ###   ## ##
	0x30, 0x63, 0xE0, 0x00, //   ##     ##   #####
	0x30, 0xE1, 0xC0, 0x00, //   ##    ###    ###
	0x30, 0x60, 0x00, 0x00, //   ##     ##
	0x38, 0x60, 0x1F, 0xFF, //   ###    ##        #############
	0x32, 0xE0, 0x1F, 0xFF, //   ##  # ###        #############
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x3A, 0x60, 0x1C, 0x00, //   ### #  ##        ###
	0x32, 0xE0, 0x1C, 0x00, //   ##  # ###        ###
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x3A, 0x60, 0x1C, 0x00, //   ### #  ##        ###
	0x32, 0xE0, 0x1C, 0x00, //   ##  # ###        ###
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x3A, 0x60, 0x1F, 0xFE, //   ### #  ##        ############
	0x32, 0xE0, 0x1F, 0xFE, //   ##  # ###        ############
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x32, 0x60, 0x1C, 0x00, //   ##  #  ##        ###
	0x72, 0x70, 0x1C, 0x00, //  ###  #  ###       ###
	0x62, 0x30, 0x1C, 0x00, //  ##   #   ##       ###
	0xC7, 0x18, 0x1C, 0x00, // ##   ###   ##      ###
	0xCF, 0x98, 0x1C, 0x00, // ##  #####  ##      ###
	0xDF, 0xD8, 0x1C, 0x00, // ## ####### ##      ###
	0xDF, 0xD8, 0x1C, 0x00, // ## ####### ##      ###
	0xCF, 0x98, 0x00, 0x00, // ##  #####  ##
	0x67, 0x30, 0x00, 0x00, //  ##  ###  ##
	0x70, 0x70, 0x00, 0x00, //  ###     ###
	0x3F, 0xE0, 0x00, 0x00, //   #########
	0x0F, 0x80, 0x00, 0x00, //     #####
};

//
//  Image data for celcius
//

// Bitmap sizes for celcius
const uint8_t menu_celciusWidthPixels = 32;
const uint8_t menu_celciusHeightPixels = 32;
const uint8_t menu_celciusBitmaps[] PROGMEM =
{
	0x0F, 0x81, 0xC0, 0x00, //     #####      ###
	0x1F, 0xC3, 0xE0, 0x00, //    #######    #####
	0x38, 0xE3, 0x60, 0x00, //   ###   ###   ## ##
	0x30, 0x63, 0xE0, 0x00, //   ##     ##   #####
	0x30, 0xE1, 0xC0, 0x00, //   ##    ###    ###
	0x30, 0x60, 0x00, 0x00, //   ##     ##
	0x38, 0x60, 0x07, 0xF0, //   ###    ##          #######
	0x32, 0xE0, 0x1F, 0xF8, //   ##  # ###        ##########
	0x32, 0x60, 0x3C, 0x3C, //   ##  #  ##       ####    ####
	0x3A, 0x60, 0x70, 0x1E, //   ### #  ##      ###       ####
	0x32, 0xE0, 0xF0, 0x0E, //   ##  # ###     ####        ###
	0x32, 0x60, 0xE0, 0x0F, //   ##  #  ##     ###         ####
	0x3A, 0x61, 0xE0, 0x06, //   ### #  ##    ####          ##
	0x32, 0xE1, 0xC0, 0x00, //   ##  # ###    ###
	0x32, 0x61, 0xC0, 0x00, //   ##  #  ##    ###
	0x3A, 0x61, 0xC0, 0x00, //   ### #  ##    ###
	0x32, 0xE1, 0xC0, 0x00, //   ##  # ###    ###
	0x32, 0x61, 0xC0, 0x00, //   ##  #  ##    ###
	0x32, 0x61, 0xC0, 0x00, //   ##  #  ##    ###
	0x32, 0x61, 0xC0, 0x06, //   ##  #  ##    ###           ##
	0x32, 0x60, 0xE0, 0x07, //   ##  #  ##     ###          ###
	0x72, 0x70, 0xE0, 0x0F, //  ###  #  ###    ###         ####
	0x62, 0x30, 0xE0, 0x0E, //  ##   #   ##    ###         ###
	0xC7, 0x18, 0x70, 0x1E, // ##   ###   ##    ###       ####
	0xCF, 0x98, 0x3C, 0x3C, // ##  #####  ##     ####    ####
	0xDF, 0xD8, 0x1F, 0xF8, // ## ####### ##      ##########
	0xDF, 0xD8, 0x0F, 0xE0, // ## ####### ##       #######
	0xCF, 0x98, 0x00, 0x00, // ##  #####  ##
	0x67, 0x30, 0x00, 0x00, //  ##  ###  ##
	0x70, 0x70, 0x00, 0x00, //  ###     ###
	0x3F, 0xE0, 0x00, 0x00, //   #########
	0x0F, 0x80, 0x00, 0x00, //     #####
};

// Bitmap sizes for battery_4q
const uint8_t battery_4qWidthPixels = 15;
const uint8_t battery_4qHeightPixels = 8;

//
//  Image data for battery_4q
//

const uint8_t battery_4qBitmaps[] PROGMEM =
{
	0x7F, 0xFC, //  #############
	0x80, 0x04, // #            #
	0xBF, 0xF6, // # ########## ##
	0xBF, 0xF2, // # ##########  #
	0xBF, 0xF2, // # ##########  #
	0xBF, 0xF6, // # ########## ##
	0x80, 0x04, // #            #
	0x7F, 0xFC, //  #############
};

// Bitmap sizes for battery_1q
const uint8_t battery_1qWidthPixels = 15;
const uint8_t battery_1qHeightPixels = 8;

//
//  Image data for battery_1q
//

const uint8_t battery_1qBitmaps[] PROGMEM =
{
	0x7F, 0xFC, //  #############
	0x80, 0x04, // #            #
	0xB0, 0x06, // # ##         ##
	0xB0, 0x02, // # ##          #
	0xB0, 0x02, // # ##          #
	0xB0, 0x06, // # ##         ##
	0x80, 0x04, // #            #
	0x7F, 0xFC, //  #############
};

// Bitmap sizes for battery_2q
const uint8_t battery_2qWidthPixels = 15;
const uint8_t battery_2qHeightPixels = 8;

//
//  Image data for battery_2q
//

const uint8_t battery_2qBitmaps[] PROGMEM =
{
	0x7F, 0xFC, //  #############
	0x80, 0x04, // #            #
	0xBE, 0x06, // # #####      ##
	0xBE, 0x02, // # #####       #
	0xBE, 0x02, // # #####       #
	0xBE, 0x06, // # #####      ##
	0x80, 0x04, // #            #
	0x7F, 0xFC, //  #############
};

// Bitmap sizes for battery_3q
const uint8_t battery_3qWidthPixels = 15;
const uint8_t battery_3qHeightPixels = 8;

//
//  Image data for battery_3q
//

const uint8_t battery_3qBitmaps[] PROGMEM =
{
	0x7F, 0xFC, //  #############
	0x80, 0x04, // #            #
	0xBF, 0xC6, // # ########   ##
	0xBF, 0xC2, // # ########    #
	0xBF, 0xC2, // # ########    #
	0xBF, 0xC6, // # ########   ##
	0x80, 0x04, // #            #
	0x7F, 0xFC, //  #############
};

// Bitmap sizes for battery_chrging
const uint8_t battery_chrgingWidthPixels = 15;
const uint8_t battery_chrgingHeightPixels = 8;

//
//  Image data for battery_chrging
//

const uint8_t battery_chrgingBitmaps[] PROGMEM =
{
	0x7F, 0xFC, //  #############
	0xF8, 0x3C, // #####     ####
	0xF8, 0x06, // #####        ##
	0x80, 0x3E, // #         #####
	0x80, 0x3E, // #         #####
	0xF8, 0x06, // #####        ##
	0xF8, 0x3C, // #####     ####
	0x7F, 0xFC, //  #############
};


#endif
