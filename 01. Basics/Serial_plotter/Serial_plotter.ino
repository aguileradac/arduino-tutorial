void setup() {
  Serial.begin(9600);

}

void loop() {
  int valor;
  valor = random(0,100);
  Serial.println(valor);
  delay(250);
}
