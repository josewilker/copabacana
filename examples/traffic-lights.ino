/*
 Copacabana Traffic Lights by José Wilker <jose.wilker@smartapps.com.br>
*/

#define LEDR 12
#define LEDG 14
#define LEDY 5
#define TIMESTART 1000
#define TIMEINTERVAL 5000

void setup() {

	pinMode(LEDR, OUTPUT);
	pinMode(LEDG, OUTPUT);
	pinMode(LEDY, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(LEDY, LOW);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, LOW);

  delay(TIMESTART);

  digitalWrite(LEDR, HIGH);

  delay(TIMEINTERVAL);

  digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, HIGH);

  delay(TIMEINTERVAL);

  digitalWrite(LEDG, LOW);
  digitalWrite(LEDY, HIGH);

  delay(TIMEINTERVAL);

}