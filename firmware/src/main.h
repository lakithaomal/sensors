#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
// #include <OneWire.h>

#include "scanner.h"
#include "stringutils.h"
#include "fmt.h"

#include "./util/findSensor.h"
#include "./met/met.h"
#include "./light/light.h"
#include "./serial/serial.h"
#include "./spi/spi.h"
#include "./i2c/i2c.h"
// OneWire ds(48);

#define PRINTF_BUF 256

#define MetSenNum 0x09
#define LightSenNum 0x08

int NumVal = 0;
char dataReading[PRINTF_BUF];
char buffer[PRINTF_BUF];

Scanner scanner;
Sensor sensor;
Metsense metsense;
Lightsense lightsense;
CustomSerial customserial;
CustomSPI customspi;
CustomI2C customi2c;