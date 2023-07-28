const int IR = 2; //sensor
const int motor = 13; //dispenser motor
const int led=12; //indicator
int senout = 0; //output state of sensor
void setup() {
 pinMode(motor, OUTPUT);
 pinMode(led, OUTPUT);
 pinMode(IR, INPUT);
}
void loop() {
 senout= digitalRead(IR); //check status of sensor
 if (senout == HIGH) //hand detected
 {
 digitalWrite(motor, HIGH); //start motor
 digitalWrite(led, HIGH); //led starts glowing
 delay(2000); //sanitizer dispenses for 2 sec
 }
 else
 {
 digitalWrite(motor, LOW); //stop motor
 digitalWrite(led, LOW);
 }
}
