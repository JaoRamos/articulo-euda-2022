#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

Adafruit_BME280 bme; // I2C


float resultadoAnterior;

void setup() {
  Serial.begin(115200);

  
  Serial.println("Iniciando BPM280");
  if (!bme.begin(0x76)) {  
    Serial.println("No se detecta el BPM280!!");
    while (1);  // detiene todo...
  }
  
  bme.setSampling(bme.MODE_NORMAL, bme.SAMPLING_X1, bme.SAMPLING_X1, bme.SAMPLING_NONE, bme.FILTER_X2, bme.STANDBY_MS_0_5);


  // primer valor
  //resultadoAnterior = 100.0 * float(analogRead(A0)) / 1024.0;

  delay(500);

  resultadoAnterior = (bme.readPressure() / 100.0 - 1010.0) * 100.0;  // lee y centra a cero


  Serial.print("Filtrado");      //the first variable for plotting
  Serial.print(",");              //seperator
  Serial.println("Original"); 
}

void loop() {
  float valorActual = (bme.readPressure() / 100.0 - 1010.0) * 100.0;
  float fuerza = float(analogRead(A0)) / 4100;
  float resultado = suavizar(valorActual, fuerza, resultadoAnterior);
  Serial.print(resultado);
  Serial.print(",");              //seperator
  Serial.println(valorActual);
  resultadoAnterior = resultado;
  delay(10);
}

float suavizar(float dato, float fuerza, float valorPrevio) {
  // funcion basada en "Smooth v0.2" por Paul Badger (2007)
  // fuerza del filtro:  0.0 = apagado   1.0 = maximo
  //float f = max(min(fuerza, 0.99), 0.0);
  return (dato * (1.0 - fuerza)) + (valorPrevio  *  fuerza);
}


