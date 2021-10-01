#include <Arduino.h>
#include <Adafruit_TinyUSB.h> // for Serial

// Definicion de los pines UART
#define RX_PIN 15
#define TX_PIN 17

void setup() {
  Serial.begin(9600); // Serial is the USB serial port
  Serial1.begin(9600); // Puerto serie hardware para comunicación con el sensor, 8 bit, no parity, 1 stop bit, 3.3V
}

int sensorData [11];
void Serial1InParser(void)
{
    int i = 0;
    for (int i =0; i<11; i++) {
       while(!Serial1.available()) { }
       sensorData[i] = Serial1.parseInt();
    }
}

void loop() {
  Serial1.print('\r'); // Inicia una lectura del sensor. Ahora hay que espera a que nos envíe algo de vuelta!
  Serial.println("Lectura del sensor iniciada...esperando...");
  Serial1InParser();
  for (int j=0; j<11; j++) {Serial.println(sensorData[j]);}
  delay(2000);
}
