/**
 * @file CosaCiaoNative.ino
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2012, Mikael Patel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA  02111-1307  USA
 *
 * @section Description
 * Example program for the Ciao streaming format; native data types.
 *
 * This file is part of the Arduino Che Cosa project.
 */

#include "Cosa/Ciao.h"
#include "Cosa/IOStream.h"
#include "Cosa/Trace.h"
#include <ctype.h>
#include <math.h>

// Ciao output stream
Ciao cout;

// Arduino build includes stdio and putchar macro so we need to undef
#undef putchar

// We need a trick to allow mapping the binary stream to textual trace
// This is basically an example of the Decorator Design Pattern
// Otherwise we would need to write a host program
class TraceDevice : public IOStream::Device {
public:
  virtual int putchar(char c)
  { 
    trace.print((uint8_t) c, 16); 
    if (isgraph(c)) {
      trace.print(' ');
      trace.print(c);
    }
    trace.println();
    return (1); 
  }
};

// The new IOStream device that will print in hexadecimal
TraceDevice traceDevice;

void setup()
{
  // Start trace coutput stream
  trace.begin(9600, PSTR("CosaCiaoNative: started"));

  // Setup and start the data output stream on the trace device
  cout.set(&traceDevice);

  INFO("Write the header to the trace device", 0);
  cout.begin();

  // Values to stream
  char* s = "Tjena, tjabba";
  uint8_t x = 15;
  int32_t y = -2;
  int16_t z[] = { 1, 2, 3, 4 };
  float r = M_PI;
  float c[] = { -1.0, 1.0 };

  INFO("Stream standard type values", 0);
  cout.write(s);
  cout.write(x);
  cout.write(y);
  cout.write(z, membersof(z));
  cout.write(r);
  cout.write(c, membersof(c));
  cout.write(NAN);
  cout.write(INFINITY);
}

void loop()
{
}
