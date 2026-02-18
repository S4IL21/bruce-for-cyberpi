#pragma once

// SPI TFT Display 1.44" (128x128)
#define PIN_MOSI 23
#define PIN_MISO 19
#define PIN_CLK 18
#define PIN_CS 12
#define PIN_DC 2
#define PIN_RST 5
#define PIN_BL 5

// Buttons / Joystick
#define PIN_BUTTON_A 35
#define PIN_BUTTON_B 34
#define PIN_BUTTON_HOME 39

// Builtin LED (optional)
#define LED_BUILTIN 5

// Peripherals (set -1 if unused)
#define PIN_MIC -1
#define PIN_CC1101 -1
#define PIN_LORA -1

// Arduino macros
#define digitalWrite(pin, level) gpio_set_level((gpio_num_t)pin, level)
#define digitalRead(pin) gpio_get_level((gpio_num_t)pin)
