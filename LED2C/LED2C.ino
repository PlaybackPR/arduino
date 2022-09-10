const int  LED=9;
const int  LEDR=8;

void setup() {
pinMode(LED, OUTPUT);
pinMode(LEDR, OUTPUT);
}

void loop() {
digitalWrite(LED, HIGH);
digitalWrite(LEDR, LOW);
delay(500);
digitalWrite(LED, LOW);
digitalWrite(LEDR, HIGH);
delay(500);
}
