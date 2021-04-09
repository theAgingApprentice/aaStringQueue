# aaStringQueue

This repository contains an Arduino library that provides your project with a [FIFO](https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)) queue for character arrays (char[]).

## Getting Started

This section will provide you with guidance to help determine if this library is approppriate for your needs as well as how to add it to your project.    

### Prerequisites
This library was written using Microsoft's [Visual Studio Code](https://code.visualstudio.com/docs) source code editor in conjunction with the [PlatformIO](https://platformio.org/) [embedded software](https://en.wikipedia.org/wiki/Embedded_software) [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment). If you use the defaut Arduino IDE then you probebly should not use this library. 

The code in this library requires that your project includes the [Arduino Core library for ESP32](https://github.com/espressif/arduino-esp32) which is comes as part of the Arduino framework when building a project using Platform.io.

The installation instructions assume that you have Git installed on your computer.

### Code Compatibility

This library has only been tested on the [Adafruit Huzzah32](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather) development board containing the [Espressif ESP WROOM32 SOC](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf) featuring a pair of [Cadence/Xtensa®32-bit LX6 microprocessors](https://mirrobo.ru/wp-content/uploads/2016/11/Cadence_Tensillica_Xtensa_LX6_ds.pdf). 

### Installing

1. Navigate to the Arduino project directory on yur computer
2. Issue the command git clone 

## Running the tests

At this time there are no automated tests for this application.


## Contributing



## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/va3wam/ZippiTwipi/tags). 

## Acknowledgements

* The many folks involved in porting the Arduino libraries over to the ESP32 SOC.
* Adafruit for their excellent freely available tutorials.

## Lisence
[![LICENSE](https://img.shields.io/badge/license-MIT-lightgrey.svg)](https://raw.githubusercontent.com/mmistakes/minimal-mistakes/master/LICENSE)

The MIT License (MIT)

Copyright (c) 2013-2020 Michael Rose and contributors

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
