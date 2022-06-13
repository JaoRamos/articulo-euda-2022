#define UMBRAL_ENCENDIDO 615
#define UMBRAL_APAGADO 410
#define PIN_SALIDA 8
#define ENCENDIDO 1
#define APAGADO 0
int estado_activacion = 0;

void setup() {
  pinMode(PIN_SALIDA, OUTPUT);
}

void loop() {
  int valor = analogRead(A0);
  if((valor < UMBRAL_APAGADO) && (estado_activacion==ENCENDIDO)) 
    estado_activacion = APAGADO;
  if((valor > UMBRAL_ENCENDIDO) && (estado_activacion==APAGADO)) 
    estado_activacion = ENCENDIDO;
  digitalWrite(PIN_SALIDA, estado_activacion);
}

