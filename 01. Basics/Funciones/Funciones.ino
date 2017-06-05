 bool Primo( int n)
 {
    for ( int i = 2 ; i <n ; i++)
        {
           if ( n % i == 0) // Si el resto es 0 entonces es divisible.
               { 
                  Serial.println ( String(n) +" es divisible por: " + String(i)) ;
                  return(false) ;
               }
         }
   return (true) ;
   }

bool control = true ; // Prog_8_2
int maximo = 1024 ;
      
void setup() {
  Serial.begin(9600);

}

void loop() {
 if ( control) // Solo es para que no repita una y otra vez lo mismo
    { 
         Serial.println( "Los numeros primos hasta el " + String( maximo)) ;
         for ( int x = 2 ; x < maximo ; x++)
               { 
                  bool p = Primo(x);
                  if (p ) Serial.println( x) ; // No hay inconveniente en escribirlo seguido
               }
    }
  control = false ;
}
