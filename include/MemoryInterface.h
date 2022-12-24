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
//    This file contains a high level interface for saving on non volatile memory.
//
// Implementation:
//    Implemented with Arduino.h
//    IMPORTANT: uses eeprom i2c external chips!!
//
//***********************************************************************************

#ifndef MEMORY_INTERFACE_H
#define MEMORY_INTERFACE_H

#include <stdint.h>
#include <Arduino.h>
#include <EEPROM.h>

#define WIRE_BUFFER_SIZE_LIMIT (32)

class MemoryInterface
{
public:
/*! @param  maxSizeBytes Physical limit of the eeprom used in bytes */
  MemoryInterface(uint16_t maxSizeBytes, uint8_t address) : _maxSizeBytes(maxSizeBytes), _address(address) {}

  ~MemoryInterface() {}

  void Write() {
    struct lol {
      int a;
      int b;
    };
    lol yo;
    Wire.beginTransmission(_address); 
    Wire.write(_address);
    EEPROM.write(yo);
    Wire.write(yo);
    Wire.endTransmission();    // stop transmitting
  }

private:
  uint16_t _maxSizeBytes;
  uint8_t _address;
};

#endif