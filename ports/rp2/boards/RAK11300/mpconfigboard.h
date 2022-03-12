// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "RAK11300 Module"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024) 

#define MICROPY_HW_USB_VID (0x2E8A)
#define MICROPY_HW_USB_PID (0x00C0)

//#define MICROPY_HW_UART0_TX		(0)
//#define MICROPY_HW_UART0_RX		(1)
#define MICROPY_HW_I2C1_SDA		(2)
#define MICROPY_HW_I2C1_SCL		(3)
//#define MICROPY_HW_UART1_TX		(4)
//#define MICROPY_HW_UART1_RX		(5)

// GPIO6						(6)
// GPIO7						(7)cd 
// GPIO8 						(8)
// GPIO9						(9)

// SX1262 Radio on SPI1
#define MICROPY_HW_SPI1_SCK		(10)
#define MICROPY_HW_SPI1_MOSI	(11) 
#define MICROPY_HW_SPI1_MISO	(12)
// #define SPI1_NSS				(13) 
// #define NRESET				(14) 
// #define BUSY					(15) 
// #define DI01					(29) 
// #define ANT_SW				(25) 
#define MICROPY_HW_SPI0_MISO	(16) 
// #define SPIO_SS				(17)  
#define MICROPY_HW_SPI0_SCK		(18)
#define MICROPY_HW_SPI0_MOSI	(19) 
#define MICROPY_HW_I2C0_SDA		(20) 
#define MICROPY_HW_I2C0_SCL		(21) 
// #define GPIO22				(22) // 
// #define LED1					(23) //
// #define LED2					(24) //
// #define ADC0					(26) //
// #define ADC1					(27) //
// #define ADC2					(28) //

