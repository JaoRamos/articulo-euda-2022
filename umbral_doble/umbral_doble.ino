#define UMBRAL_ENCENDIDO 500;
#define UMBRAL_APAGADO 600;
#define PIN_SALIDA 8
int estado_activacion = 0;

void setup() {
  pinMode(PIN_SALIDA, OUTPUT);
}

void loop() {
  int valor = analogRead(A0);
  
  if((valor < UMBRAL_APAGADO) && (estado_activacion==0)) estado_activacion = 1;
  if((valor > UMBRAL_ENCENDIDO) && (estado_activacion==1)) estado_activacion = 0;

  digitalWrite(PIN_SALIDA, estado_activacion);
}

