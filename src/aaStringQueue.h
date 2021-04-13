/*!
 * @file aaStringQueue.h
 ============================================================================*/

#ifndef aaStringQueue_h // Start of precompiler code block. Avoid duplicate inclusion.

#define aaStringQueue_h // Precompiler macro used for precompiler check.

#include <Arduino.h> // Arduino Core for ESP32. Comes with Platform.io

class aaStringQueue // Define aaStringQueue class 
{
   public:
      aaStringQueue(); // Constructor
      void cfgToConsole();
      const char* getSDKVer();
      const char* getChipModel();
      uint8_t getChipRevision();
      uint32_t getSerialSpeed();
      uint32_t getCodeSize();
      uint32_t getFreeHeap();
      uint32_t getCpuId();
      uint32_t getCpuClock();
      bool isEmpty();
      bool isFull();
      int8_t getMaxSize();
      int8_t getCount();
      void flush();
      void push(char*);
      bool pop();
   private:
}; //class aaStringQueue

extern aaStringQueue appCore; // Expose all public variables and methods for libraries.

#endif // End of precompiler protected code block.