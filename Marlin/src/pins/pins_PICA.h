#ifndef BOARD_NAME
  #define BOARD_NAME "PICA"
#endif

// djp added from source
/* note that these are the "pins" that correspond to the analog inputs on the arduino mega.  these are not the same as the physical pin numbers
AD0 = 54;   AD1 = 55;   AD2 = 56;   AD3 = 57;   
AD4 = 58;   AD5 = 59;   AD6 = 60;   AD7 = 61;   
AD8 = 62;   AD9 = 63;   AD10 = 64;  AD11 = 65;
AD12 = 66;  AD13 = 67;  AD14 = 68;  AD15 = 69;
*/
/*************************************
 * PICA Arduino shield configuration mjrice
 ************************************* */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#define KNOWN_BOARD 1
#define LARGE_FLASH true

#define X_DIR_PIN         54  
// Analog Pin A10
#define X_STEP_PIN        55  
// Analog Pin A1 
#define Y_DIR_PIN         56  
// Analog Pin A2
#define Y_STEP_PIN        57  
// Analog Pin A3
#define Z_DIR_PIN         58  
// Analog Pin A4
#define Z_STEP_PIN        59  
// Analog Pin A5
#define X_ENABLE_PIN      60  
// Analog Pin A6   
#define Y_ENABLE_PIN      61  
// Analog Pin A7
#define Z_ENABLE_PIN      62  
// Analog Pin A8

#define X_MIN_PIN         14  
// different that PIN_ramps.h
#define X_MAX_PIN         15  
// different that PIN_ramps.h

#define Y_MIN_PIN          16  
// different that PIN_ramps.h
#define Y_MAX_PIN          17  
// different that PIN_ramps.h

#define Z_MIN_PIN          23  
// different that PIN_ramps.h
#define Z_MAX_PIN          22  
// different that PIN_ramps.h

#define E0_STEP_PIN         67  
// Analog pin A13
#define E0_DIR_PIN          24  
// on expansion header pin 24
#define E0_ENABLE_PIN       26  
// on expansion header pin 26

#define E1_STEP_PIN         68  
// Analog pin A14 
#define E1_DIR_PIN          28  
// on expansion header pin 28
#define E1_ENABLE_PIN       27  
// on expansion header pin 27


#define SDPOWER            -1
#define LED_PIN            -1 
#define PS_ON_PIN          -1
#define KILL_PIN           41  
// on expansion header pin 41


#define SSR_PIN            6  
// not used
#define HEATER_BED_PIN     8  
// Pin D9
// heat bed

#define HEATER_0_PIN       10 
// Pin D10
// extruder 
#define HEATER_1_PIN       2 
// Pin D2
// second extruder
#define FAN_PIN            9 
// Pin D9
#define FAN_2_PIN          7 
// Pin D7
// also defined to hot end fan


#define TEMP_0_PIN         9  
// Pin A9 
// ANALOG NUMBERING
#define TEMP_1_PIN         10  
// Pin A10
#define TEMP_BED_PIN       10  
// Pin A10
#define TEMP_2_PIN         11  
// Pin A11
#define TEMP_3_PIN         12  
// Pin AD12

// SPI for Max6675 or Max31855 Thermocouple
#if DISABLED(SDSUPPORT)
 #define MAX6675_SS_PIN       66 
 // Do not use pin 53 if there is even the remote possibility of using Display/SD card
#else
 #define MAX6675_SS_PIN       66 
 // Do not use pin 49 as this is tied to the switch inside the SD card socket to detect if there is an SD card present
#endif

// LCD interface pins
#define LCD_PINS_RS 33
#define LCD_PINS_ENABLE 30
#define LCD_PINS_D4 35
#define LCD_PINS_D5 32
#define LCD_PINS_D6 37
#define LCD_PINS_D7 36

#define BTN_EN1 47
#define BTN_EN2 48
#define BTN_ENC 31  
//the click

#define BLEN_C 2
#define BLEN_B 1
#define BLEN_A 0

#define SD_DETECT_PIN 49 
#define BEEPER_PIN   29
#define SDSS         53

#define LCD_SDSS 53

//encoder rotation values
#define encrot0 0
#define encrot1 2
#define encrot2 3
#define encrot3 1
