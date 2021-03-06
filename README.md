Che Cosa?
---------

Cosa is an object-oriented platform for Arduino. It replaces the Arduino
and Wiring library with a large set of integrated classes that support 
the full range of AVR/ATmega/ATtiny internal hardware modules; all pin
modes, Digital, and Analog Pins, External and Pin Change Interrupts,
Analog Comparator, PWM, Watchdog, Timer0 (RTC), Timer1
(Servo/Tone/VWI), UART, USI, SPI, TWI and EEPROM.

Sketches using Cosa may be built with the Arduino IDE or with the
built-in command line support. 

More details are available in [doc](./doc) and [install](./doc/02-install.md).

Cosa API
--------

The API documentation is available :

* [online](http://dl.dropbox.com/u/993383/Cosa/doc/html/index.html)
* Compressed for [download](http://dl.dropbox.com/u/993383/Cosa/doc.zip).

The documentation contains a full hyperlinked description of all functions
in Cosa together with UML graphs of the class hierarchy, include dependencies,
and much more. 

The provided documentation is generated with doxygen and may also be
generated for users source code if the Cosa documentation style is
adapted. See the Doxyfile for configuration of doxygen. 

Supported Boards and MCUs
-------------------------

Cosa has built-in support for a large number of boards and
clones/vendors. It also supports breadboards and custom-design
boards with AVR MCUs.

* [AdaFruit ATmega32U4] (./cores/cosa/Cosa/Board/AdaFruit/ATmega32U4.hh)
* [Anarduino MiniWireless] (./cores/cosa/Cosa/Board/Anarduino/MiniWireless.hh)
* [Arduino Diecimila] (./cores/cosa/Cosa/Board/Arduino/Diecimila.hh)
* [Arduino Duemilanove] (./cores/cosa/Cosa/Board/Arduino/Duemilanove.hh)
* [Arduino Leonardo] (./cores/cosa/Cosa/Board/Arduino/Leonardo.hh)
* [Arduino Mega 1280] (./cores/cosa/Cosa/Board/Arduino/Mega.hh)
* [Arduino Mega 2560] (./cores/cosa/Cosa/Board/Arduino/Mega.hh)
* [Arduino Micro] (./cores/cosa/Cosa/Board/Arduino/Micro.hh)
* [Arduino Nano] (./cores/cosa/Cosa/Board/Arduino/Nano.hh)
* [Arduino Pro Micro] (./cores/cosa/Cosa/Board/Arduino/Pro_Micro.hh)
* [Arduino Pro Mini] (./cores/cosa/Cosa/Board/Arduino/Pro_Mini.hh)
* [Arduino Uno] (./cores/cosa/Cosa/Board/Arduino/Uno.hh)
* Breadboard ([ATtinyX4] (./cores/cosa/Cosa/Board/Arduino/ATtinyX4.hh), [ATtinyX5] (./cores/cosa/Cosa/Board/Arduino/ATtinyX5.hh), [ATtinyX61] (./cores/cosa/Cosa/Board/Arduino/ATtinyX61.hh), [ATmega328] (./cores/cosa/Cosa/Board/Arduino/ATmega328P.hh), [ATmega1284] (./cores/cosa/Cosa/Board/Arduino/ATmega1284P.hh))
* [LilyPad Arduino] (./cores/cosa/Cosa/Board/Arduino/LilyPad.hh)
* [LilyPad Arduino USB] (./cores/cosa/Cosa/Board/Arduino/LilyPad_USB.hh)
* [LowPowerLab Moteino] (./cores/cosa/Cosa/Board/LowPowerLab/Moteino.hh)
* [LowPowerLab Moteino Mega] (./cores/cosa/Cosa/Board/LowPowerLab/Moteino_Mega.hh)
* [Pinoccio Scout] (./cores/cosa/Cosa/Board/Pinoccio/Scout.hh)
* [Microduino-Core] (./cores/cosa/Cosa/Board/Microduino/Core.hh)
* [Microduino-Core32u4] (./cores/cosa/Cosa/Board/Microduino/Core32U4.hh)
* [Microduino-Core+] (./cores/cosa/Cosa/Board/Microduino/Core_Plus.hh)
* [PJRC Teensy 2.0] (./cores/cosa/Cosa/Board/PJRC/Teensy_2_0.hh)
* [PJRC Teensy++ 2.0] (./cores/cosa/Cosa/Board/PJRC/Teensypp_2_0.hh)

References
----------

1. D.tools, http://hci.stanford.edu/research/dtools/
2. Processing, http://processing.org/
3. Wiring, http://wiring.org.co/
4. Arduino, http://www.arduino.cc/
5. Firmata, http://www.firmata.org/wiki/Main_Page
6. LilyPad, http://web.media.mit.edu/~leah/LilyPad/
7. Jeelabs, http://jeelabs.org/
8. Microduino, http://www.microduino.cc/
9. Teensy, https://www.pjrc.com/
10. Pinoccio, https://pinocc.io/
11. LowPowerLab, http://lowpowerlab.com/
12. Anarduino, http://www.anarduino.com/
13. Quantum Leaps, http://www.state-machine.com/
14. Concurrency.cc, http://concurrency.cc/
15. Protothreads, http://dunkels.com/adam/pt/
16. Arduino Low Power, http://gammon.com.au/power
17. Virtual Wire, http://www.open.com.au/mikem/arduino/VirtualWire/
18. MQTT, http://mqtt.org/
19. ThingSpeak, https://thingspeak.com/

Naming
------

* "Cosa"; noun thing, matter; pronoun; what?, what!. 
* "Che cosa"; pronoun; what. 
* "Ciao"; interjection hello!, goodbye!. 
* "Cosa fai"; what do you do?
* "Rete"; network
* "Nucleo"; kernel

Stay tuned
----------

Please follow the development of this project on the blog 
http://cosa-arduino.blogspot.se and on the Arduino forum,
http://arduino.cc/forum/index.php/topic,150299.0.html.    
