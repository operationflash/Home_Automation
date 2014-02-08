/*
Program to control remote outlets using a nintendo ds touchscreen as input device
 Build date: 02-02-2014, v0.1
 Modified: 03-02-2014 --got library working with arduino ide--
 Modified: 07-02-2014 --bugfixes--
 public test build
 */

/// Add the following libraries: ///
#include <TouchScreenBeta.h>
#include <RemoteTransmitter.h> // not my library, check: https://bitbucket.org/fuzzillogic/433mhzforarduino

/// Declerations: ///
int xValue = 0;
int yValue = 0;

/// Set class names and set control pins ///
Touch Touch(A0,A1,A2,A3); //If using sparkfurn breakout board then the the touchpins need to go y1,x2,y2,x1
ActionTransmitter actionTransmitter(13); // transmitter to D13

/// Send codes ///
int A1On()
{
  actionTransmitter.sendSignal(1,'A',true);
  Serial.println("A1 go on");
}
int A1Off()
{
  actionTransmitter.sendSignal(1,'A',false);
  Serial.println("A1 go off");
}
int B1On()
{
  actionTransmitter.sendSignal(1,'B',true);
  Serial.println("B1 go on");
}
int B1Off()
{
  actionTransmitter.sendSignal(1,'B',false);
  Serial.println("B1 go off");
}
void C1On()
{
  actionTransmitter.sendSignal(1,'C',true);
  Serial.println("C1 go on");
}
void C1Off()
{
  actionTransmitter.sendSignal(1,'C',false);
  Serial.println("C1 go off");
}


/// --- ///
void setup()
{
  Serial.begin(115200); // Initialize serial output with 115200 buad/s

}

/// --- ///
void loop()
{
  //x-axis:85-840 y-axis:820-105
  xValue =  Touch.ReadX(); // Read horizontal lines
  yValue =  Touch.ReadY(); // Read vertical lines

  Serial.print(" X-value = ");
  Serial.print(xValue);
  Serial.print(" Y-value = ");
  Serial.println(yValue);

  // screen coordinates may vary per screen
  if ((xValue < 5 ) && (yValue < 5))
  {
    Serial.println("No touch input");
  }
  if ((xValue < 385) && (xValue >= 135) && (yValue < 580) && yValue > 340)
  {
    B1On();
  }

  if ((xValue < 135) && (xValue > 80) && (yValue < 580) && yValue > 340)
  {
    B1Off();
  }

  if ((xValue < 385) && (xValue >= 135) && (yValue < 820) && yValue > 580)
  {
    C1On();
  }

  if ((xValue < 135) && (xValue > 80) && (yValue < 820) && yValue > 580)
  {
    C1Off();
  }
  delay(100);

}










