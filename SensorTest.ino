const int Sensor=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(Sensor));
  delay(100);

}
