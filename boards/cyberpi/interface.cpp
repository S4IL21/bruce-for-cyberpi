#include "hagl_hal.h"
#include "cyberpi.h"
#include "driver/gpio.h"

void board_setup() {
    // Backlight ON
    gpio_set_direction(PIN_BL, GPIO_MODE_OUTPUT);
    gpio_set_level(PIN_BL, 1);

    // Init display HAL
    hagl_hal_init();
    hagl_init();

    // Clear screen
    hagl_fill_screen(HAGL_COLOR_BLACK);
}
