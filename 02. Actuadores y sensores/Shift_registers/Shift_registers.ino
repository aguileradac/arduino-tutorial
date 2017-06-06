int latchPin = 8 ;        //Pin conectado a ST_CP of 74HC595 (Verde)
int clockPin = 12;        //Pin conectado a SH_CP of 74HC595 (Amarillo)
int dataPin = 11;          //Pin connected to DS of 74HC595  (Azul)

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  for (int Num = 0; Num < 256; Num++)
    {
       digitalWrite(latchPin, LOW) ; // Latch a LOW para que no varíe la salida
       shiftOut(dataPin, clockPin, MSBFIRST, Num);  // Aqui va Num
  
       digitalWrite(latchPin, HIGH) ; // Latch a HIGH fija valores en la salida
       delay(500);
    }

}
