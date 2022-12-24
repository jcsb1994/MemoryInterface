//***********************************************************************************
// Copyright 2021 jcsb1994
// Written by jcsb1994
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//***********************************************************************************
//
// Description:
//    This file contains an example of how to use the MemoryInterface library
//
//    This example writes bytes to a AT24C32 EEPROM chip.
//
//***********************************************************************************

#include <Arduino.h>
#include "MemoryInterface.h"

#define AT24C32_EEPROM_ADDRESS 0x56
#define AT24C32_EEPROM_BYTE_SIZE 4096 

MemoryInterface eepromMemory = MemoryInterface(AT24C32_EEPROM_BYTE_SIZE, AT24C32_EEPROM_ADDRESS);

void setup() {
  Serial.begin(9600);
  Serial.println("hello, AT24C32 MemoryInterface example!");
}

void loop() {

}