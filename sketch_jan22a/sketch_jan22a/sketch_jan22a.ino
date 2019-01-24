int val = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode (A0, INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

val = analogRead(A0);
Serial.println(val);

if (val > 600){
  digitalWrite(13, HIGH);
  if (digitalRead(2) == HIGH){
    digitalWrite(13, LOW);}
}
if (val < 601){
  digitalWrite(13, LOW);
  if (digitalRead(2) == HIGH){
    digitalWrite(13, HIGH);}

}

delay(10);
  

 }
