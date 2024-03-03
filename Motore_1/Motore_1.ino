const int motore=3;


void setup() {
pinMode(motore,OUTPUT);
}

void loop() {
digitalWrite(motore,HIGH);
delay(500);
digitalWrite(motore,LOW);
delay(500);

}
