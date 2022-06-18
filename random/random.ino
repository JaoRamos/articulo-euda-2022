void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  Serial.println(random(255));
}
void loop(){}
