// This #include statement was automatically added by the Particle IDE.
#include <Grove_Temperature_And_Humidity_Sensor.h>
DHT dht(D2);

void setup() {
    Serial.begin(9600);
    dht.begin();
}

void loop() {
  
  float temp, humidity;
    
  temp = dht.getTempFarenheit();

  Serial.printlnf("Temperature: %f", temp);

  String temp1 = String(temp);
  
  Particle.publish("temp", temp1, PRIVATE);
  delay(30000);               // Wait for 30 seconds
}


