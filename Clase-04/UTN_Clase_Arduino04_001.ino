//Seteo de variables
int Led_Pin = 3;
int Fot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
int lastValue = 0;

//Seteo del arranque de codigo
void setup()
{
  Serial.begin(9600);
  Serial.print("Iniciando");
  Serial.println("...");
  pinMode(Led_Pin, OUTPUT);
}

//Codigo a loopear
void loop()
{
 sensorValue = analogRead(Fot_Pin); 
 if (sensorValue != lastValue)
  {
  	lastValue = sensorValue;
    outputValue = map(sensorValue, 0, 1023, 0, 255);
    analogWrite(Led_Pin, outputValue);
    Serial.print("Lectura: ");
    Serial.println(sensorValue);
    Serial.print("Mapeado: ");
    Serial.println(outputValue);
  }
  else
  {
  	digitalWrite(Led_Pin, HIGH);
    delay(100);
    digitalWrite(Led_Pin, LOW);
  }
  	delay(100);
}
  
//Codigo del Apunte:

/*digitalWrite(Led_Pin, HIGH);
 sensorValue = analogRead(Fot_Pin);
 outputValue = map(sensorValue, 0, 1023, 0, 255);
 analogWrite(Led_Pin, outputValue);
 Serial.print("Lectura: ");
 Serial.println(sensorValue);
 Serial.print("Mapeado: ");
 Serial.println(outputValue);
 delay(250);
 digitalWrite(Led_Pin, LOW);
 delay(250);*/