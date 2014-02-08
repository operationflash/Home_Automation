/*
Program to control remote outlets using a nintendo ds touchscreen as input device
 Build date: 02-02-2014, v0.1
 Modified: 03-02-2014 --got library working with arduino ide--
 Modified: 07-02-2014 --bugfixes--
 test build
 */

/// Add the following libraries: ///
#include <TouchScreenBeta.h>

/// Declerations: ///
int xValue = 0;
int yValue = 0;

/// Set class names and set control pins ///
Touch Touch(A0,A1,A2,A3);

/// --- ///
void setup()
{
  Serial.begin(115200); // Initialize serial output with 38400 buad/s

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

  delay(250);
}







