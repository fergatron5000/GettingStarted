/************************
 * This is a direct     *
 * intrepretration I    *
 * wrote from the ARDX  *
 * provided sketch.     *
 ************************/

int ledPin = 9;

void setup () {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
