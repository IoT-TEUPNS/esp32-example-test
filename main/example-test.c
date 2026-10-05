#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h" // Biblioteca necessária para controlar os pinos

// O LED embutido na placa do ESP32 WROOM fica no pino 2
#define BLINK_GPIO 2

void app_main(void)
{
    // Configura o pino do LED como saída digital
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    while (1) {
        // Liga o LED
        gpio_set_level(BLINK_GPIO, 1);
        vTaskDelay(pdMS_TO_TICKS(50)); // Aguarda 50 milissegundos

        // Desliga o LED
        gpio_set_level(BLINK_GPIO, 0);
        vTaskDelay(pdMS_TO_TICKS(50)); // Aguarda 50 milissegundos
    }
}
