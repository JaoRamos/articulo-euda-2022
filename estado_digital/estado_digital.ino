byte ultimoEstado;

void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  ultimoEstado = digitalRead(12);
  Serial.println(ultimoEstado);
}

void loop() {
  byte valorActual = digitalRead(12);
  if (valorActual != ultimoEstado){
    ultimoEstado = valorActual; // actualiza el último estado
    // procesar aquí el evento nuevo
    Serial.println(ultimoEstado);
  }
}
