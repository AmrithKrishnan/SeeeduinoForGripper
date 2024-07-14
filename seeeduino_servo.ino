/***************************************************************************
 *  seeeduinoSketch.ino - Ardunino sketch for controlling the gripper
 *  Copyright  2024 Amrith Krishnan
 ****************************************************************************/

/*  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  Read the full text in the LICENSE.GPL file in the doc directory.
 */

#include <Servo.h> 
int inSignalPin = 6;

Servo gripper;
void setup() {
  pinMode(inSignalPin, INPUT);
  gripper.attach(5);
}

void loop() {
  
  if (digitalRead(inSignalPin)){
    gripper.write(150);
  } else {
    gripper.write(50);
  }
  delay(50);
  //gripper.write(150);
}
