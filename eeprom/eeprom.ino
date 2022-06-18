#include <EEPROM.h>
int direccionMemoria = 0;
byte valor = 123;

void guardarParametros() {
  EEPROM.write(direccionMemoria, valor);
}

void cargarParametros() {
  valor = EEPROM.read(direccionMemoria);
}

