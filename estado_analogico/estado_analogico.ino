int ultimoEstado;

void setup() {
  Serial.begin(9600);
  ultimoEstado = analogRead(A0)/16;
  Serial.println(ultimoEstado);
}

void loop() {
  int valorActual = analogRead(A0)/16;
  if (valorActual != ultimoEstado){
    ultimoEstado = valorActual; // actualiza el último estado
    // procesar aquí el evento nuevo
    Serial.println(ultimoEstado);
  }  
}
