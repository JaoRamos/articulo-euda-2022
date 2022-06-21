boolean HAY_DEPURACION = false; // true -> habilita la depuracion

void setup() {
  if (HAY_DEPURACION) Serial.begin(9600);
  // if (!HAY_DEPURACION) sensor.begin(); // posibilidad alternativa !
  if (HAY_DEPURACION) Serial.println("Mensaje de depuracion 1");
}

void loop() {
  if (HAY_DEPURACION) Serial.println("Mensaje de depuracion 2");
  if (!HAY_DEPURACION) /* tareas si NO hay depuracion */ ;
}
