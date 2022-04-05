
#ifndef LEDSTRIPSPI_H
#define LEDSTRIPSPI_H


// Ports and pins for SPI interface
#define US0MISO_PORT  gpioPortA
#define US0MISO_PIN   5
#define US0MOSI_PORT  gpioPortA
#define US0MOSI_PIN   6
#define US0CLK_PORT   gpioPortD
#define US0CLK_PIN    2
#define US0CS_PORT    gpioPortC
#define US0CS_PIN     1

// LDMA channel for receive and transmit servicing
#define RX_LDMA_CHANNEL 0
#define TX_LDMA_CHANNEL 1

#define ONE_LED_BUFFER_SIZE 24
#define RESET_LOGIC_BUFFER_SIZE 100//40//51//67
#define NUMBEROFLEDS 6

#define BUFLEN  (NUMBEROFLEDS*ONE_LED_BUFFER_SIZE)+RESET_LOGIC_BUFFER_SIZE

enum LogicState
    {
    LOGIC_0 = 0xe0,
    LOGIC_1 = 0xfc,//0xf8,
    LOGIC_RESET = 0
    };


/**************************************************************************//**
 * LedStripInit
 *****************************************************************************/
void initLedStrip(void);

void PopulateBufferAndSend(void);
/**************************************************************************//**
 * Application Process Action.
 *****************************************************************************/
void app_process_action(void);

#endif // LEDSTRIPSPI_H
