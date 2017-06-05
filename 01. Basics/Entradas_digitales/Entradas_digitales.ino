int LED = 10 ;
int boton = 6;
     
void setup() {
  pinMode( LED, OUTPUT) ; // LED como salida
  pinMode( boton  , INPUT) ;            //botón  como entrada
}

void loop() {
  int valor = digitalRead(boton) ;          // leemos el valor de boton en valor
  digitalWrite( LED, valor) ; 
}
