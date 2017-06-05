void setup() {
         pinMode( 13, OUTPUT) ;
         pinMode( 12, OUTPUT) ;
         pinMode( 11, OUTPUT) ;
         pinMode( 10, OUTPUT) ;
}

void loop() {
  int i = 0 ; // Inicializamos la variable i como un entero
  
  for ( i = 10 ; i < 14 ; i++) {
    digitalWrite( i , HIGH) ;
    delay (500) ;
    digitalWrite( i , LOW);
    delay (500) ;
    }
} 
