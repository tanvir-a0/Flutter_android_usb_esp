#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  pinMode(5, OUTPUT);  

  Serial.println("Hello World");

}

void loop() {
  if(Serial.available() > 0){
    char data = Serial.read();
    if(data == '1'){
      digitalWrite(5, HIGH);
    }else if(data == '0'){
      digitalWrite(5, LOW);
    }
  }
}
