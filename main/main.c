#include "driver-botao.h" 
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void main_app(void) {
    botao(); // Configura o botão
    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS); 
    }


}