#define HAY_DEPURACION 0  // 1 -> habilita la depuracion

#if HAY_DEPURACION == 1
  #define iniciaSerie(x) Serial.begin(x)
  #define imprimeDepuracion(x) Serial.println(x)
#else
  #define iniciaSerie(x)
  #define imprimeDepuracion(x)
#endif

void setup() {
  iniciaSerie(9600);
  imprimeDepuracion("Mensaje de depuracion 1");
}

void loop() {
  imprimeDepuracion("Mensaje de depuracion 2");
}
