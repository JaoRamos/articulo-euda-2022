PORTD  = B00000001;  // asigna HIGH al pin 0, y LOW a pines 1 a 7
PORTD |=  (1 << 6);  // asigna HIGH al pin 6, no modifica los demás
PORTD &= ~(1 << 6);  // asigna LOW pin 6, no modifica los demás
int estadoPin5 = (PIND & (1 << 5));  // igual a digitalRead(5);
