#include <WEMOS_SHT3X.h>
SHT3X sensor(0x44);

#define mq2 A0

void setup() {
Serial.begin(9600);
pinMode(mq2, INPUT);
}

void loop() {
if(sensor.get()==0){
  Serial.println("Temperatura:"+String(sensor.cTemp,2)+"ºC");
  Serial.println("Humedad:"+String(sensor.humidity,2)+"%");
}else{
  Serial.println("Error al leer los Datos");
}

int mq2Value= analogRead(mq2);
Serial.println("Calidad del Aire:"+String(mq2Value,DEC));

delay(2000);
}
