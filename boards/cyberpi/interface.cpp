#include "hagl_hal.h"
#include "cyberpi.h"
#include "driver/gpio.h"

// Board-specific setup
void board_setup() {
    // Initialize backlight pin
    gpio_set_direction(PIN_BL, GPIO_MODE_OUTPUT);
    gpio_set_level(PIN_BL, 1);  // turn on backlight

    // Initialize the display HAL
    hagl_hal_init();

    // Initialize the display
    hagl_init();

    // Clear screen
    hagl_fill_screen(HAGL_COLOR_BLACK);
}
