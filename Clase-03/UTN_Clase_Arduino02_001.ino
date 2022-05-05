//Inicializar variable botoncito
//hace referencia al boton conectado en el puerto 2
int botoncito = 0;
void setup()
{
// Configurar Pin como Entrada
pinMode(2, INPUT);
// Configurar Pines como Salida
pinMode(5, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}
void loop()
{
// Leer Estado del Puerto de Entrada 2
botoncito = digitalRead(2);
// Actual Segun el Estado de la Lectura
if (botoncito == HIGH){
// Apagar Led en Puerto 5
	digitalWrite(5, LOW);
// Encender Led en Puerto 13
	digitalWrite(13, HIGH);
// Esperar 1 Segundo
	delay(1000);
// Encender Led en Puerto 12
	digitalWrite(12, HIGH);
// Apagar Led en Puerto 13
	digitalWrite(13, LOW);
// Esperar 1 Segundo
	delay(1000);
// Prender el led 5
  	digitalWrite(5, HIGH);
// Apagar el led 12
  	digitalWrite(12,LOW);
// Esperar 1 segundo
  	delay(1000);
} else {
// Apagar Leds en Puertos 5, 12 y 13
	digitalWrite(5, LOW);
	digitalWrite(12, LOW);
	digitalWrite(13, LOW);
		}
}