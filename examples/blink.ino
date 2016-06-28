/*
 Copacabana Blink by José Wilker <jose.wilker@smartapps.com.br>
*/

#define LEDR 12
#define LEDG 14
#define LEDY 5

void setup() {
  pinMode(LEDY, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDY, LOW);
  delay(1000);
  digitalWrite(LEDY, HIGH);
  delay(1000);
}