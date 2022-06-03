// Temperatura

int readValue = 0;
int lastValue = 1;
int sensorPin = A3;
float voltsValue;
float tempValue;
void setup()
{
Serial.begin(9600);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}
void loop()
{
// Lectura Analoga
readValue = analogRead(sensorPin);
if (lastValue != readValue) {
Serial.print("readValue: ");
Serial.print(readValue);
lastValue = readValue;
voltsValue = 5.0 / 1024 * readValue;
Serial.print(" -> Valor del Voltaje: ");
Serial.print(voltsValue);
tempValue = voltsValue * 100 - 50;
Serial.print(" -> Valor de la Temperatura: ");
if (tempValue>70)
{
    digitalWrite(11, HIGH);
}else if(tempValue<69&&tempValue>40){
    digitalWrite(12, HIGH);
}else{;
    digitalWrite(13,HIGH);
}

Serial.println(tempValue);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

}
delay(100);
}