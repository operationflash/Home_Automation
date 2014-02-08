/*
 TouchScreenBeta library header file
 Build date 02-02-2014
 edited: 04-02-2014
 edited: 07-02-2014  ---bugfixes---
 edited: 08-02-2014  ---Added comments---
 test build
 */
// prevent including library twice
#ifndef TouchScreenBeta_h
#define TouchScreenBeta_h
// give access to standard arduino functions
#include "Arduino.h"

class Touch {
public:
	Touch(byte pin1, byte pin2, byte pin3, byte pin4); // set in/output pins
	int ReadX(); // function ReadX to read x-axis
	int ReadY(); // function Ready to read y-axis

	int xValue; // x-axis value
	int yValue; // y-axis value

private:
	byte _pin1;
	byte _pin2;
	byte _pin3;
	byte _pin4;
};
#endif
