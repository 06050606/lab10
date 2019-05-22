#include <IRremote.h>

const int buttonPin=4;
int buttonState=0;

IRsend irsend;


void setup()
{
 pinMode(buttonPin,INPUT);

}

void loop() {

  irsend.sendNEC(0x06050606,32);
  delay(1000);
}
