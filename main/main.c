#include <stdio.h>
#include "DEV_Config.h"
#include "EPD_Test.h"
void app_main(void) {
    GPIO_Init();
    SPI_Init();
    EPD_3in0g_test();

    while (1) {
        DEV_Delay_ms(2000);
        printf("...\r\n");      
    }
}
