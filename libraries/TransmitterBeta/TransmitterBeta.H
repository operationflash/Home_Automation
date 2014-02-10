/*
 TransmitterBeta library header file
 This library contains different transmit commands and is created to make the arduino file more
 comapct and better readable. More commands will be added if I need them.
 Build date 03-02-2014
 edited: 08-02-2014  --- optimizations ---
 edited: 10-02-2014	 --- Fixed and made library working by Boris ---  
 public test build
 */
// prevent including library twice
#ifndef TransmitterBeta_h
#define TransmitterBeta_h
// give access to standard arduino functions
#include "Arduino.h"
// Give access to remotetransmitter functions
#include "RemoteTransmitter.h"

class Send {
	public:
		Send(byte pin1);
		void A1On();
		void A1Off();
		void B1On();
		void B1Off();
		void C1On();
		void C1Off();
	private:
		byte _pin1;
		ActionTransmitter _AT;
};
#endif
