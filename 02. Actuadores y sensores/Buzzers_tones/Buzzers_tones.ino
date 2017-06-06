#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

int speakerPin = 9;
int numTones = 10;
     int tones[ ] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440,466, 494};
                       // mid C C# D D# E F F# G G# A

void setup() {   
  pinMode(speakerPin, OUTPUT);   
}

     void loop()
        {
             for (int i = 0; i < numTones; i++)
                 {
                     tone(speakerPin, tones[i]);
                     delay(500);
                 }
             noTone(speakerPin);
       }
