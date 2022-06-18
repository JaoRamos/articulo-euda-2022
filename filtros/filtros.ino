float resultadoAnterior;
float fuerzaFiltro = 0.9;

void setup() {
  // almacenamos un primer valor
  resultadoAnterior = analogRead(A0);
}

void loop() {
  float valorActual = analogRead(A0);
  float valorFiltrado = suavizar(valorActual, fuerzaFiltro, resultadoAnterior);
  resultadoAnterior = valorFiltrado;  // actualizamos para proximo ciclo
  delay(10);  // periodo del loop()
}

float suavizar(float valor, float fuerza, float valorPrevio) {
  // funcion basada en "Smooth v0.2" por Paul Badger (2007)
  // fuerza del filtro:  0.0 = apagado   1.0 = maximo (0.9999...)
  return (valor * (1.0 - fuerza)) + (valorPrevio  *  fuerza);
}
