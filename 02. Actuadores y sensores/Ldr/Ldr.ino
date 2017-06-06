const int pinBuzzer = 13 ; 
void setup()
  {
       pinMode (pinBuzzer , OUTPUT) ; 
  }
  
void loop()
  {
      int p = analogRead(A0) ;
      int n = map (p, 0,1024, 20, 5000) ;
      tone ( pinBuzzer, n) ;
  }
