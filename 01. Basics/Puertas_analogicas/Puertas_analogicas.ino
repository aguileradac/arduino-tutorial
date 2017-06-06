
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int lectura = analogRead(A5) ;
  analogWrite(9,lectura);
}
