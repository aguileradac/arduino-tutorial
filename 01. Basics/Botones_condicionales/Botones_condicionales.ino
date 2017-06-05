int LED = 10 ;
int boton = 6;
bool estado = false;
     
void setup() {
  pinMode( LED, OUTPUT) ; // LED como salida
  pinMode( boton  , INPUT) ;            //botón  como entrada
  digitalWrite( LED, LOW) ; // apagado al principio 
}

void loop() {
  bool valor = digitalRead(boton) ;          // leemos el valor de boton en valor

  if(valor == false) {
    estado = !estado;
    digitalWrite( LED, estado) ; 
    delay(250);
  }
    
}
