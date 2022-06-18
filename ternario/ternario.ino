void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  String resultado = (10 > 15) ? "es mayor" : "no es mayor";
  Serial.println(resultado);

}

void loop() {
  // put your main code here, to run repeatedly:
}
