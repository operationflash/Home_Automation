 /*
 TransmitterBeta library main file
 This library contains different transmitter commands and is created to make the arduino file more
 comapct and better readable. More commands will be added if I need them.
 Build date 03-02-2014
 edited: 08-02-2014  ---optimizations---
 edited: 10-02-2014	 --- Fixed and made library working by Boris---   
 private test build
 */

// give access to standard arduino functions
#include "Arduino.h"
// Give access to remotetransmitter functions
#include "RemoteTransmitter.h"
// include header file
#include "TransmitterBeta.h"

Send::Send(byte pin1) : _AT(pin1) {}

void Send::A1On() {
	_AT.sendSignal(1, 'A', true);
	Serial.println("A1 go on");
}

void Send::A1Off() {
	_AT.sendSignal(1, 'A', false);
	Serial.println("A1 go off");
}

void Send::B1On() {
	_AT.sendSignal(1, 'B', true);
	Serial.println("B1 go on");
}

void Send::B1Off() {
	_AT.sendSignal(1, 'B', false);
	Serial.println("B1 go off");
}

void Send::C1On() {
	_AT.sendSignal(1, 'C', true);
	Serial.println("C1 go on");
}

void Send::C1Off() {
	_AT.sendSignal(1, 'C', false);
	Serial.println("C1 go off");
}
