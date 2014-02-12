/*
 TouchScreenBeta library main file
 Build date 02-02-2014
 edited: 04-02-2014
 edited: 07-02-2014  ---bugfixes---
 edited: 08-02-2014  ---Added comments---
 edited: 12-02-2014  ---Added touchscreen off state---
 test build
 */
// give access to standard arduino functions
#include "Arduino.h"
// include header file
#include "TouchScreenBeta.h"

// set in/output pins
Touch::Touch(byte pin1, byte pin2, byte pin3, byte pin4) {
	_pin1 = pin1; // y1 A0
	_pin2 = pin2; // x2 A1
	_pin3 = pin3; // y2 A2
	_pin4 = pin4; // x1 A3
}

// set pins for y-axis read out and read out the y-axis
int Touch::ReadY() {
	pinMode(_pin1, INPUT);
	pinMode(_pin3, INPUT);
	pinMode(_pin2, OUTPUT);
	pinMode(_pin4, OUTPUT);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin4, HIGH);
	return yValue = analogRead(_pin1); // return the read out value

}

// set pins for x-axis read out and read out the x-axis
int Touch::ReadX() {
	pinMode(_pin2, INPUT);
	pinMode(_pin4, INPUT);
	pinMode(_pin1, OUTPUT);
	pinMode(_pin3, OUTPUT);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin3, HIGH);
	return xValue = analogRead(_pin2); // return the read out value
}

// Turns the touchscreen in off-state, for lower power consumption
void Touch::Off() {
	pinMode(_pin1, INPUT);
	pinMode(_pin3, INPUT);
	pinMode(_pin2, INPUT);
	pinMode(_pin4, INPUT);
}
