unsigned long tiempoAnterior = 0;
const int INTERVALO_MS = 100;

void setup(){}

void loop(){
  if (hayEvento()){
    // evento cada INTERVALO_MS
  }  
  // más código
}  

boolean hayEvento(){
  unsigned long tiempoActual = millis();
  boolean evento = false;  // valor por defecto
  
  if ((tiempoActual - tiempoAnterior ) >= INTERVALO_MS) {
     evento = true;
     tiempoAnterior = tiempoActual;
  }

  return evento;
}
