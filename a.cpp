#define NOTE_REST 0
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_BB6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

  double tetrismelody[] = {
    659.25511, 493.8833, 523.25113, 587.32954, 523.25113, 493.8833, 440.0, 440.0,
    523.25113, 659.25511, 587.32954, 523.25113, 493.8833, 523.25113, 587.32954,
    659.25511, 523.25113, 440.0, 440.0, 440.0, 493.8833, 523.25113, 587.32954,
    698.45646, 880.0, 783.99087, 698.45646, 659.25511, 523.25113, 659.25511,
    587.32954, 523.25113, 493.8833, 493.8833, 523.25113, 587.32954, 659.25511,
    523.25113, 440.0, 440.0
  };
  double tetrisnoteDurations[] = {
    406.250, 203.125, 203.125, 406.250, 203.125, 203.125, 406.250, 203.125,
    203.125, 406.250, 203.125, 203.125, 609.375, 203.125, 406.250, 406.250,
    406.250, 406.250, 203.125, 203.125, 203.125, 203.125, 609.375, 203.125,
    406.250, 203.125, 203.125, 609.375, 203.125, 406.250, 203.125, 203.125,
    406.250, 203.125, 203.125, 406.250, 406.250, 406.250, 406.250, 406.250
  };

  int MarioMelody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0, 0,
  NOTE_G6, 0, 0, 0,


  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,


  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,


  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0
  };

  int MarioNoteDurations[] = {
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,


  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,


  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,


  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125
  };
int y1[] = {
  NOTE_E7, NOTE_E7, NOTE_E7,
  NOTE_C7, NOTE_E7, NOTE_G7, NOTE_G7,

  NOTE_C7, NOTE_G6, NOTE_E6,
  NOTE_A6, NOTE_B6, NOTE_BB6, NOTE_A6,
  NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7,
  NOTE_FS7, NOTE_G7, NOTE_E7, NOTE_C7, NOTE_D7, NOTE_B6,

  NOTE_C7, NOTE_G6, NOTE_E6,
  NOTE_A6, NOTE_B6, NOTE_BB6, NOTE_A6,
  NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7,
  NOTE_FS7, NOTE_G7, NOTE_E7, NOTE_C7, NOTE_D7, NOTE_B6,

  NOTE_G7, NOTE_FS7, NOTE_F7, NOTE_D7, NOTE_E7,
  NOTE_G7, NOTE_A7, NOTE_C8,
  NOTE_A7, NOTE_C8, NOTE_D8,
  NOTE_G7, NOTE_FS7, NOTE_F7, NOTE_D7, NOTE_E7,
  NOTE_C8, NOTE_C8, NOTE_C8,

  NOTE_G7, NOTE_FS7, NOTE_F7, NOTE_D7, NOTE_E7,
  NOTE_G7, NOTE_A7, NOTE_C8,
  NOTE_A7, NOTE_C8, NOTE_D8,
  NOTE_DS8, NOTE_D8, NOTE_C8,

  NOTE_C7, NOTE_C7, NOTE_C7,
  NOTE_C7, NOTE_D7, NOTE_E7, NOTE_C7, NOTE_A6, NOTE_G6,
  NOTE_C7, NOTE_C7, NOTE_C7,
  NOTE_C7, NOTE_D7, NOTE_E7,

  NOTE_C7, NOTE_C7, NOTE_C7,
  NOTE_C7, NOTE_D7, NOTE_E7, NOTE_C7, NOTE_A6, NOTE_G6,
  NOTE_E7, NOTE_E7, NOTE_E7,
  NOTE_C7, NOTE_E7, NOTE_G7,
  NOTE_G7
};


int x1[] = {
125, 125, 125,
125, 125, 250, 250,

250, 250, 250,
125, 125, 125, 500,

250, 250, 250,
125, 125, 250, 250,

125, 125, 125, 125, 250, 250,
125, 125, 125, 500,

250, 250, 250,
125, 125, 125, 500,

125, 125, 125, 125,
125, 125, 125, 125, 125, 125,
125, 125, 125, 125,
125, 125, 125, 250, 125, 125, 250,

125, 125, 125, 125,
125, 125, 125, 125, 125, 125,
125, 125, 250, 250,
125, 125, 500,

125, 125, 125,
125, 125, 250, 125, 125,
125, 125, 125,
125, 125, 250,

125, 125, 125,
125, 125, 250, 125, 125,
125, 125, 125,
125, 125, 250,

125, 125, 250,
125, 125, 125,
125, 125, 125, 125, 125, 125,
125, 125, 250,

125, 125, 250,
125, 125, 125,
125, 125, 125, 125, 125, 125, 125,
125, 125, 125, 250, 125, 125, 250,

250, 250, 250,
125, 125, 125,
250, 250, 250,
250, 250, 500
};




int RickMelody[] = {
  NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_CS5, NOTE_B4, NOTE_A4,
  NOTE_B4, NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_B4, NOTE_A4, NOTE_E5, NOTE_E5,
  NOTE_CS5, NOTE_D5, NOTE_B4, NOTE_D5, NOTE_E5, NOTE_CS5, NOTE_B4, NOTE_CS5, NOTE_B4, NOTE_A4,
  NOTE_B4, NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_B4, NOTE_A4, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A4,
  NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_B4, NOTE_E5, NOTE_FS5, NOTE_E5,
  NOTE_A4, NOTE_B4, NOTE_D5, NOTE_B4, NOTE_FS5, NOTE_FS5, NOTE_E5,
  NOTE_A4, NOTE_B4, NOTE_D5, NOTE_B4, NOTE_D5, NOTE_CS5, NOTE_B4,
  NOTE_A4, NOTE_B4, NOTE_D5, NOTE_B4, NOTE_FS5, NOTE_FS5, NOTE_E5
};

int RickNoteDurations[] = {
  250, 125, 125, 250, 250, 125, 125, 250,
  250, 125, 125, 250, 250, 125, 125, 250,
  250, 125, 125, 250, 250, 125, 125, 250, 250, 125,
  125, 250, 250, 125, 125, 250, 250, 125, 125, 250,
  250, 125, 125, 250, 250, 250, 125,
  250, 125, 125, 250, 250, 125, 125,
  250, 125, 125, 250, 250, 125, 125,
  250, 125, 125, 250, 250, 125, 125
};

int distanceThreshold = 0;
int cm = 0;
int inches = 0;
int buzzerPin = 4;
int tempo_mario = 200;
int tempo_pink = 160;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}


void setup()
{
  Serial.begin(9600);


  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

int song = 0;
int prevsong=0;
int i=0;
void loop()
{
  // set threshold distance to activate LEDs
  distanceThreshold = 30;
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7, 6);


  // convert to inches by dividing by 2.54
  Serial.print(cm);
  Serial.print("cm, ");
  if (0){


  }
  else if (cm > distanceThreshold) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(buzzerPin, LOW);


    //digitalWrite(2, HIGH);
    //digitalWrite(3, HIGH);
    //digitalWrite(4, LOW);
    //delay(1000); // Wait fWor 100 millisecond(s)
    //digitalWrite(4, HIGH);
  }
  else if (cm <= distanceThreshold && cm > distanceThreshold - 6) {
    digitalWrite(2, HIGH);
    //digitalWrite(3, LOW);
    //digitalWrite(4, LOW);


    digitalWrite(3, HIGH);


   
    digitalWrite(2, HIGH);
    //digitalWrite(3, LOW);
    //digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    Serial.print("outside\n");
    for (int j =0; (i < 120) && (cm <= distanceThreshold) &&(cm > distanceThreshold - 6); i++) {
      song =1;if (prevsong!=song){i=0;} prevsong=song;
      cm=0.01723 * readUltrasonicDistance(7, 6);
      if (MarioMelody[i] != 0) {
        Serial.print(i);
        Serial.print(" inside\n");
        // Play the note on the buzzer
        tone(buzzerPin, MarioMelody[i], MarioNoteDurations[i]);
      }
    // Wait for the note duration before playing the next note
      delay(MarioNoteDurations[i] * 0.5);
    }
 
  }
  else if (cm <= distanceThreshold - 6 && cm > distanceThreshold - 12) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    //digitalWrite(4, LOW);
   
    //delay(100); // Wait for 100 millisecond(s)
    //digitalWrite(4, HIGH);
    //playDonkeyKongSong();
          song =2;if (prevsong!=song){i=0;} prevsong=song;
      cm=0.01723 * readUltrasonicDistance(7, 6);

  }
  else if (cm <= distanceThreshold - 12 && cm > distanceThreshold - 18) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    // digitalWrite(4, HIGH);
    // digitalWrite(4, LOW);
    // delay(10); // Wait for 100 millisecond(s)
    // digitalWrite(4, HIGH);


      int notes[] = {2093, 1865, 2093, 1568, 1397, 1175, 1046, 1397, 1865, 1568, 1397, 1175, 1046, 932, 1397, 1568, 1397, 1175, 1397, 1568, 1397, 1175, 1046, 1397, 1865, 1568, 1397, 1175, 1046, 932};
      int duration[] = {250, 250, 250, 500, 250, 250, 250, 500, 250, 250, 250, 250, 250, 1000, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 1000};
      int numNotes = sizeof(notes) / sizeof(notes[0]);
      for (int j = 0; i < numNotes &&(cm <= distanceThreshold - 12 && cm > distanceThreshold - 18); i++) {
      song =3;if (prevsong!=song){i=0;} prevsong=song;
      cm=0.01723 * readUltrasonicDistance(7, 6);
        
        tone(buzzerPin, notes[i], duration[i]);
        delay(duration[i] * 1.30);
        noTone(buzzerPin);
        delay(duration[i] * 0.30);
      }
  
  }
  else if (cm <= 12) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    //digitalWrite(4, HIGH);


    // digitalWrite(4, LOW);
    // delay(5); // Wait for 100 millisecond(s)
    // digitalWrite(4, HIGH);    


    
  // Play the Tetris theme song
    for (int j = 0; i < sizeof(tetrismelody)/sizeof(tetrismelody[0]) && cm <= 12; i++) {
      song =4;if (prevsong!=song){i=0;} prevsong=song;
      cm=0.01723 * readUltrasonicDistance(7, 6);

    // If the note is not a pause
    if (tetrismelody[i] != 0) {
      // Play the note on the buzzer
      tone(buzzerPin, tetrismelody[i], tetrisnoteDurations[i]);
    }
    // Wait for the note duration before playing the next note
    delay(tetrisnoteDurations[i] * 1.3);
  }

  }
  delay(100); // Wait for 100 millisecond(s)


  Serial.print(cm);
}


void playMarioThemeSong(){







}


void playTetrisThemeSong(){



}


void playMegaManSong(){
  // Main 15 seconds of Dr. Wily Stage 1 theme song

}


void playDonkeyKongSong(){
  Serial.print("GGGGGGGGGGGGGGGGGG");
  tone(buzzerPin, 659, 250); // E5
  delay(250);
  tone(buzzerPin, 659, 250); // E5
  delay(250);
  tone(buzzerPin, 659, 250); // E5
  delay(250);
  tone(buzzerPin, 784, 250); // G5
  delay(250);
  tone(buzzerPin, 659, 250); // E5
  delay(250);
  tone(buzzerPin, 784, 250); // G5
  delay(250);
  tone(buzzerPin, 880, 500); // A5
  delay(500);
  tone(buzzerPin, 523, 250); // C5
  delay(250);
  tone(buzzerPin, 659, 250); // E5
  delay(250);
  tone(buzzerPin, 587, 250); // D5
  delay(250);
  tone(buzzerPin, 523, 250); // C5
  delay(250);
  tone(buzzerPin, 440, 500); // A4
  delay(500);
  tone(buzzerPin, 523, 250); // C5
  delay(250);
  tone(buzzerPin, 587, 250); // D5
  delay(250);
  tone(buzzerPin, 659, 1000); // E5
  delay(1000);
}








