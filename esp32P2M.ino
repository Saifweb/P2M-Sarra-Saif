#include <Wire.h>
#include <Adafruit_MPU6050.h>
Adafruit_MPU6050 mpu;
#define button 12
int c=0;
bool currentState=1;
bool lastState=1;
bool sending=false;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Initializing MPU6050...");
  while (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
  }
  Serial.println("MPU6050 found!");

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(currentState==0 && lastState==1){
      Serial.print(0);
      Serial.print(",");
      Serial.print(0);
      Serial.print(",");
      Serial.print(0);
      Serial.print(",");
      Serial.print(0);
      Serial.print(",");
      Serial.print(0);
      Serial.print(",");
      Serial.println(0);
      sending=!sending;
  }
  if(sending){
    sendData();
  }
  lastState=currentState;
  currentState=digitalRead(button);
}

void sendData()
{
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);
    Serial.print(a.acceleration.x);
    Serial.print(",");
    Serial.print(a.acceleration.y);
    Serial.print(",");
    Serial.print(a.acceleration.z);
    Serial.print(",");
    Serial.print(g.gyro.x);
    Serial.print(",");
    Serial.print(g.gyro.y);
    Serial.print(",");
    Serial.println(g.gyro.z);
    delay(500);
}
