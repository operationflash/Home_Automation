#include <TransmitterBeta.h>
#include <RemoteTransmitter.h>

Send zender(13);

void setup()
{
}

void loop()
{
  zender.A1On();
  delay(100);
  zender.A1Off();
  delay(100);
  zender.B1On();
  delay(100);
  zender.B1Off();
  delay(100);
  zender.C1On();
  delay(100);
  zender.C1Off();
  delay(100);

}
