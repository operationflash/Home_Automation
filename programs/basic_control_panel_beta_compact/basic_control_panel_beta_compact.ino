/*
 Program to control remote outlets using a nintendo ds touchscreen as input device
 Build date: 02-02-2014, v0.1
 Modified: 03-02-2014 --got library working with arduino ide--
 Modified: 07-02-2014 --bugfixes--
 public test build
 */

/// Add the following libraries: ///
#include <TouchScreenBeta.h>
#include <TransmitterBeta.h>
#include <RemoteTransmitter.h>

/// Declerations: ///
int xValue = 0;
int yValue = 0;

/// Set class names and set control pins ///
Touch Touch(A0,A1,A2,A3); //If using sparkfurn breakout board then the the touchpins need to go y1,x2,y2,x1
Send Send(13); // Data out pin to transmitter


/// --- ///
void setup()
{
  Serial.begin(115200); // Initialize serial output with 115200 buad/s

}

/// --- ///
void loop()
{
  xValue =  Touch.ReadX(); // Read horizontal lines
  yValue =  Touch.ReadY(); // Read vertical lines

  Serial.print(" X-value = ");
  Serial.print(xValue);
  Serial.print(" Y-value = ");
  Serial.println(yValue);

  if ((xValue < 5 ) && (yValue < 5))
  {
    Serial.println("No touch input");
  }
  if ((xValue < 385) && (xValue >= 150) && (yValue < 580) && yValue > 340)
  {
    Send.B1On();
  }

  if ((xValue < 150) && (xValue > 80) && (yValue < 580) && yValue > 340)
  {
    Send.B1Off();
  }

  if ((xValue < 385) && (xValue >= 150) && (yValue < 820) && yValue > 580)
  {
    Send.C1On();
  }
  if ((xValue < 150) && (xValue > 80) && (yValue < 820) && yValue > 580)
  {
    Send.C1Off();
  }
  delay(100);

}











