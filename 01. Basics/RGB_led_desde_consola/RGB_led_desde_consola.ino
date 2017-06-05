int ledR = 11;
int ledG = 10;
int ledB = 9;


void setup() {
  pinMode( ledR, OUTPUT) ;
  pinMode( ledG, OUTPUT) ;
  pinMode( ledB, OUTPUT) ;
  Serial.begin(9600);
}

void loop() {
 char r = ' ', g = ' ', b = ' ' ;
 String cR ="", cG="", cB="" ;
        
 Color(0,0,0);
 
 if (Serial.available()) //Comprobamos si hay algo esperando
     {
        while( r != '\n') //Si lo hay, lo leemos hasta el intro
            { 
              cR = cR + r ; // Añadimos lo leído al mensaje
              r = Serial.read(); //Leer 1 carácter
              delay(25);
            }
        Serial.println("RED: "+cR); //Al salir imprimir el mensaje

        while( g != '\n') //Si lo hay, lo leemos hasta el intro
            { 
              cG = cG + g ; // Añadimos lo leído al mensaje
              g = Serial.read(); //Leer 1 carácter
              delay(25);
            }
        Serial.println("GREEN: "+cG); //Al salir imprimir el mensaje

        while( b != '\n') //Si lo hay, lo leemos hasta el intro
            { 
              cB = cB + b ; // Añadimos lo leído al mensaje
              b = Serial.read(); //Leer 1 carácter
              delay(25);
            }
        Serial.println("BLUE: "+cB); //Al salir imprimir el mensaje

        Color(cR.toInt(), cG.toInt(), cB.toInt());
        delay(5000);     
     } 

}

void Color(int R, int G, int B)
{     
    analogWrite(ledR, R) ;   // Red    - Rojo
    analogWrite(ledG, G) ;   // Green - Verde
    analogWrite(ledB, B) ;   // Blue - Azul
}
