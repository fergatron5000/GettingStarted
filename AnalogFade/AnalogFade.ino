/************************
 * This is a simple     *
 * analog fade based on *
 * the Making It Better *
 * section of the ARDX  *
 * CIRC-01              *
 ************************/
 
int ledPin = 9;
int increment = 1;
int level = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop () {
  analogWrite(ledPin, level);
  delay (10);
  
  level += increment;
  
  if(level == 255) increment = -1;
  if(level == 0) increment = 1;
}
