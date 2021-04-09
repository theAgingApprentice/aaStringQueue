
## Table of contents
* [Overview](#Overview)
* [Development environment](#Development-environment)
* [Code dependencies](Code-dependencies)
* [Microprocessor compatibility](#Microprocessor-compatibility)
* [Installing](#Installing)
* [Running tests](#Running-tests)
* [Versioning](#Versioning)
* [Acknowledgements](#Acknowledgements)
* [Lisence](#Lisence)

## Overview
This repository contains an Arduino library that provides your project with a [FIFO](https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)) queue for character arrays (char[]).

## Development environment
This library was written using the following tools:

[<img src="/img/vscLogo.png" width="15" height="15">](https://code.visualstudio.com/docs) Microsoft's Visual Studio Code source code editor. 

[<img src="/img/pioLogo.png" width="20" height="15">](https://platformio.org/) PlatformIO plugin [embedded software](https://en.wikipedia.org/wiki/Embedded_software) application [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment). 

If you are using the standard Arduino IDE for your project then you should probably avoid using this library unless you are comfortable navigating the subtle differences bewteen how your envoronment works vs. how the environment used to create this library behaved.

## Code dependencies
This library requires that your project include the following Arduino libraries:

1. [Arduino Core library for ESP32](https://github.com/espressif/arduino-esp32). This library comes as part of the Arduino framework when using Platform.io.

## Microprocessor compatibility
This library has only been tested on the [Adafruit Huzzah32](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather) development board containing the [Espressif ESP WROOM32 SOC](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf) featuring a pair of [Cadence/Xtensa®32-bit LX6 microprocessors](https://mirrobo.ru/wp-content/uploads/2016/11/Cadence_Tensillica_Xtensa_LX6_ds.pdf). 

### Installing
These instructions assume that you have [Git](https://git-scm.com/) installed on your computer.

1. Navigate to the Arduino project directory on your computer.
2. Issue the command `git clone https://github.com/theAgingApprentice/aaStringQueue.git`.

## Running tests

At this time there are no automated tests for this application.

## Versioning

We use [SemVer](http://semver.org/) for versioning. There is no stable version of this ibrary released yet. 

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
