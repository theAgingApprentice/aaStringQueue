[![LICENSE](https://img.shields.io/badge/license-MIT-lightgrey.svg)](https://raw.githubusercontent.com/mmistakes/minimal-mistakes/master/LICENSE)

## Table of contents
* [Overview](#Overview)
* [Development environment](#Development-environment)
* [Code dependencies](#Code-dependencies)
* [Microprocessor compatibility](#Microprocessor-compatibility)
* [Installing](#Installing)
* [Running tests](#Running-tests)
* [Versioning](#Versioning)
* [Acknowledgements](#Acknowledgements)

## Overview
This repository contains an Arduino library that provides your project with a [FIFO](https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)) queue for character arrays (char[]).

## Development environment
This library was written using the following tools:

[<img src="/img/vscLogo.png" width="15" height="15">](https://code.visualstudio.com/docs) Microsoft's Visual Studio Code source code editor. 

[<img src="/img/pioLogo.png" width="20" height="15">](https://platformio.org/) PlatformIO plugin [embedded software](https://en.wikipedia.org/wiki/Embedded_software) application [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment). 

If you are using the standard Arduino IDE for your project then you should probably avoid using this library unless you are comfortable navigating the subtle differences bewteen how your envoronment bahaves and how the environment used to create this library behaved.

## Code dependencies
This library requires that your project include the following Arduino libraries:

1. [Arduino Core library for ESP32](https://github.com/espressif/arduino-esp32). This library comes as part of the Arduino framework when using Platform.io.

## Microprocessor compatibility
This library has only been tested on the [Adafruit Huzzah32](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather) development board containing the [Espressif ESP WROOM32 SOC](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf) featuring a pair of [Cadence/Xtensa®32-bit LX6 microprocessors](https://mirrobo.ru/wp-content/uploads/2016/11/Cadence_Tensillica_Xtensa_LX6_ds.pdf). 

## Installing
These instructions assume that you have [Git](https://git-scm.com/) installed on your computer.

1. Navigate to the Arduino project directory on your computer.
2. Issue the command `git clone https://github.com/theAgingApprentice/aaStringQueue.git`.
3. Issue the command `git remote`. If you get back the response *origin* then you are all set. If you get a blank response back then you must set up an association to the remote repository by issuing the command `git remote add origin https://github.com/theAgingApprentice/aaStringQueue.git` to set up the remote. 

## Running tests

At this time there are no automated tests for this application.

## Releases

* We use [SemVer](http://semver.org/) for versioning for our release numbering scheme. 
* There is no stable version of this library released at this time. 

## Acknowledgements

* The many folks involved in porting the Arduino libraries over to the ESP32 SOC.
* Adafruit for their excellent freely available tutorials.
