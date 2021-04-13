/******************************************************************************
 * @file aaStringQueue.cpp
 *
 * @mainpage the Aging Apprentice microprcessor information class 
 * 
 * @section intro_sec Introduction
 *
 * This is an Arduino class that provides a queue for char[]. It is part of a 
 * series of classes made to support a standard set of APIs for robot platforms. 
 *
 * @section dependencies Dependencies
 * 
 * This class depends on on <a href="https://github.com/espressif/arduino-esp32">
 * Arduino.h</a> being present on your system. This is the Arduino core library
 * that comes bundled with PlatformIO.
 *
 * @section author Author(s)
 *
 * Written by Old Squire for the Aging Apprentice.
 *
 * @section license license
 *
 * Copyright 2021 the Aging Apprentice 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions: The above copyright
 * notice and this permission notice shall be included in all copies or 
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.  
 *****************************************************************************/
#include <aaStringQueue.h> // Header file for linking.

/**
 * @class Retrieve microprocessor configuration details from both FreeRTOS and 
 * the ESP32 Arduino framework.
 * ==========================================================================*/
aaStringQueue::aaStringQueue()
{

} //aaStringQueue::aaStringQueue()

/**
 * @brief Returns the version number of the SDK used to build the binary.
 * @return cont char* ESP.getSdkVersion()   
 * ==========================================================================*/
const char* aaStringQueue::getSDKVer()
{
   return ESP.getSdkVersion();
} //aaStringQueue::getSDKVer()

/**
 * @brief Returns the revision number of the ESP32 chip.
 * @return uint32_t ESP.getChipRevision()   
 * ==========================================================================*/
const char* aaStringQueue::getChipModel()
{
   return ESP.getChipModel();
} //aaStringQueue::getChipModel()

/**
 * @brief Returns the revision number of the ESP32 chip.
 * @return uint32_t ESP.getChipRevision()   
 * ==========================================================================*/
uint8_t aaStringQueue::getChipRevision()
{
   return ESP.getChipRevision();
} //aaStringQueue::getChipRevision()

/**
 * @brief Returns the size of the binary file in bytes.
 * @return uint32_t ESP.getSketchSize()   
 * ==========================================================================*/
uint32_t aaStringQueue::getCodeSize()
{
   return ESP.getSketchSize();
} //aaStringQueue::getCodeSize()

/**
 * @brief Returns number of bytes of sorted memory the program can use.
 * @return uint32_t ESP.getFreeHeap()   
 * ==========================================================================*/
uint32_t aaStringQueue::getFreeHeap()
{
   return ESP.getFreeHeap();
} //aaStringQueue::getFreeHeap()

/**
 * @brief Returns the current baud rate that the serial port is set to.
 * @return uint32_t Serial.baudRate()   
 * ==========================================================================*/
uint32_t aaStringQueue::getSerialSpeed()
{
   return Serial.baudRate();
} //aaStringQueue::getSerialSpeed()

/**
 * @brief Returns the CPU ID of the application core.
 * @return uint32_t xPortGetCoreID()   
 * ==========================================================================*/
uint32_t aaStringQueue::getCpuId()
{
   return xPortGetCoreID();
} //aaStringQueue::getCpuId()

/**
 * @brief Returns the clock speed of the application core in Mhz.
 * @return uint32_t Serial.baudRate()   
 * ==========================================================================*/
uint32_t aaStringQueue::getCpuClock()
{
   return getCpuFrequencyMhz();
} //aaStringQueue::getCpuClock()