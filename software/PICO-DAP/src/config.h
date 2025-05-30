// ===================================================================================
// User Configurations for picoDAP
// ===================================================================================

#pragma once

// Pin definitions
#define PIN_LED             P11      // pin connected to LED, active low
#define PIN_RST             P17       // pin connected to nRESET
#define PIN_SWD             P15       // pin connected to SWDIO via 100R resistor
#define PIN_SWK             P16       // pin connected to SWCLK via 100R resistor

// USB device descriptor
#define USB_VENDOR_ID       0x1209    // VID
#define USB_PRODUCT_ID      0xC55D    // PID
#define USB_DEVICE_VERSION  0x0100    // v1.0 (BCD-format)

// USB configuration descriptor
#define USB_MAX_POWER_mA    450       // max power in mA 

// USB descriptor strings
#define MANUFACTURER_STR    'w','a','g','i','m','i','n','a','t','o','r'
#define PRODUCT_STR         'p','i','c','o','D','A','P',' ', 'C','M','S','I','S','-','D','A','P'
#define SERIAL_STR          'C','H','5','5','x'
#define INTERFACE_STR       'H','I','D',' ','D','a','t','a'
