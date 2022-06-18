typedef struct {
   char stringInstrumento [11];  // maximo caracteres + 1
} Instrumento;

const Instrumento nombresInstrumentos [10] PROGMEM = { 
  "G. Piano",
  "B. Piano",
  "E. Piano",
  "H.T. Piano",
  "E. Piano 1",
// [resto de instrumentos...]
// [...]
  "Bird Tweet",
  "Telephone",
  "Helicopter",
  "Applause",
  "Gunshot"
};

String leerTextoInstrumento(int indiceInstrumento) {
  Instrumento instrumentoActual;       // contenedor temporal
  memcpy_P (&instrumentoActual,                      // destino
            &nombresInstrumentos[indiceInstrumento], // origen
            sizeof instrumentoActual);               // tamaño
  return instrumentoActual.stringInstrumento;
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  Serial.println(leerTextoInstrumento(int(random(10))));
}

void loop(){}




