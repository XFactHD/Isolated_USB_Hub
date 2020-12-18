#include <Arduino.h>
#include <Wire.h>

#include <Adafruit_NeoPixel.h>

#include <Defines.hpp>

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(1, PIN_NEOPIXEL, NEO_GRB | NEO_KHZ800);

uint8_t config[256] = { 0 };

void setup() {
  //Init neopixel, show working in yellow
  pixel.begin();
  delayMicroseconds(40);
  pixel.clear();
  pixel.setPixelColor(0, Adafruit_NeoPixel::Color(1, 1, 0));
  pixel.show();

  //Set hub reset and eeprom write protect to outputs to pull them low
  pinMode(PIN_HUB_RESET, OUTPUT);
  pinMode(PIN_EEPROM_WP, OUTPUT);
  delay(10);

  //Initialize I2C with 400kHz
  Wire.begin();
  Wire.setClock(400000);

  //Set up config data
  memset(config, 0, 256);
  config[REG_VID_LSB      ] = 0x24;
  config[REG_VID_MSB      ] = 0x04;
  config[REG_PID_LSB      ] = 0x13;
  config[REG_PID_MSB      ] = 0x25;
  config[REG_DID_LSB      ] = 0xB3;
  config[REG_DID_MSG      ] = 0x0B;
  config[REG_CFG_1        ] = CFG1_SELF_BUS_PWR | CFG1_HS_DISABLE | CFG1_MTT_EN | CFG1_EOP_DISABLE | CFG1_ISENSE_INDIV | CFG1_PWR_SW_INDIV;
  config[REG_CFG_2        ] = CFG2_COMPOUND;
  config[REG_CFG_3        ] = 0x02;
  config[REG_NR_DEVICE    ] = NR_DEVICE_P3 | NR_DEVICE_P2 | NR_DEVICE_P1;
  config[REG_MAX_PWR_SP   ] = 0x01;
  config[REG_HC_MAX_I_SP  ] = 0x01;
  config[REG_PWR_ON_TIME  ] = 0x32;
  config[REG_BOOST_US     ] = 0x00;
  config[REG_BOOST_DS     ] = 0x00;
  config[REG_PORT_SWAP    ] = PORT_SWAP_DS_P3 | PORT_SWAP_DS_P2 | PORT_SWAP_DS_P1;

  //Transmit config data one byte at a time
  //for(int i = 0; i < 256; i++) {
  //  Wire.beginTransmission(B1010000);
  //  Wire.write(i);
  //  Wire.write(config[i]);
  //  Wire.endTransmission(true);
  //  delay(10);
  //}

  //Transmit config data in 8 byte blocks (page buffer size)
  for(int i = 0; i < 256; i += 8) {
    Wire.beginTransmission(B1010000);
    Wire.write(i);
    Wire.write(config + i, 8);
    Wire.endTransmission(true);
    delay(10);
  }

  //Release I2C bus
  Wire.end();

  //Set hub reset and eeprom write protect to inputs to reactivate them
  pinMode(PIN_EEPROM_WP, INPUT);
  delay(10);
  pinMode(PIN_HUB_RESET, INPUT);

  //Show done in green on neopixel
  pixel.setPixelColor(0, Adafruit_NeoPixel::Color(0, 1, 0));
  pixel.show();
}

void loop() {}