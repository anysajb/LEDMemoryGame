const int buttony = 2;
const int buttong = 3;
const int buttonb = 4;
const int buttonr = 5;
const int LEDyellow = 7;
const int LEDgreen = 8;
const int LEDblue = 9;
const int LEDred = 10;
const int buzzer = 12;
const int sounds[] = {1915, 1700, 1519, 1432, 2700};

int buttonState[] = {0, 0, 0, 0};
int finalbuttonState[] = {0, 0, 0, 0};
int buttonPushCounter[] = {0, 0, 0, 0};

void playSound(int sound, int duration) {
  for (long i = 0; i < duration * 1000L; i += sound * 2) {
    \
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(sound);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(sound);
  }
}


void setup() {
  randomSeed(analogRead(0));
  pinMode(buttony, INPUT);
  pinMode(buttong, INPUT);
  pinMode(buttonb, INPUT);
  pinMode(buttonr, INPUT);
  pinMode(LEDyellow, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDblue, OUTPUT);
  pinMode(LEDred, OUTPUT);
  Serial.begin(9600);

  
}
int game_on = 0;
int wait = 0;
int currentlevel = 1;
long rand_num = 0;
int rando = 0;
int butwait = 500;
int ledtime = 500;
int n_levels = 10;
int pinandsound = 0;
int right = 0;
int speedfactor = 5;
int leddelay = 200;


void loop() {
 int data = digitalRead(buttony); 
 delay(1000);
 Serial.println(data);
 
  
  /* int n_array[n_levels];
  int u_array[n_levels];
  int i;
  if (game_on == 0) {
    for (i = 0; i < n_levels; i = i + 1) {
      n_array[i] = 0;
      u_array[i] = 0;
      rand_num = random(1, 200);
      if (rand_num <= 50)
        rando = 0;
      else if (rand_num > 50 && rand_num <= 100)
        rando = 1;
      else if (rand_num <= 200)
        rando = 3;
      n_array[1] = rando;
    }
    game_on = 1;
  }
  if (wait == 0) {
    delay(200);
    i = 0;
    for (i = 0; i < currentlevel; i = i + 1) {
      leddelay = ledtime / (1 + speedfactor / n_levels) * (currentlevel - 1);
      pinandsound = n_array[i];
      digitalWrite(pinandsound + 7, HIGH);
      playSound(sounds[pinandsound], leddelay);
      digitalWrite(pinandsound + 7, LOW);
      delay(100 / speedfactor);

    }
    wait = 1;
  }
  i = 0;
  int buttonchange = 0;
  int j = 0;
  while (j < currentlevel) {
    while (buttonchange == 0) {
      for (i = 0; i < 4; i = i + 1) {
        buttonState[i] = digitalRead(i + 2);
        buttonchange = buttonchange + buttonState[i];

      }
    }
    for (i = 0; i < 4; i = i + 1) {
      if (buttonState[i] == HIGH) {
        digitalWrite(i + 7, HIGH);
        playSound(sounds[i], ledtime);
        digitalWrite(i + 7, LOW);
        wait = 0;
        u_array[j] = i;
        buttonState[i] = LOW;
        buttonchange = 0;
      }
    }
    if (u_array[j] == n_array[j]) {
      j++;
      right = 1;
    }
    else {
      right = 0;
      i = 4;
      j = currentlevel;
      wait = 0;
    }
  }

  if (right == 0) {
    delay(300);
    i = 0;
    game_on = 0;
    currentlevel = 1;
    for (i = 0; i < 4; i = i + 1) {
      digitalWrite(i + 7, LOW);
    }
    delay(200);
    for (i = 0; i < 4; i = i + 1) {
      digitalWrite(i + 7, HIGH);
    }
    playSound(sounds[4], ledtime);
    for (i = 0; i < 4; i = i + 1) {
      digitalWrite(i + 7, LOW);
    }
    delay(500);
    game_on = 0;
  }
  if (right == 1) {
    currentlevel++;
    wait = 0;
  }
  if (currentlevel == n_levels) {
    delay(500);
    int notes[] = {2, 2, 2, 2, 0, 1, 2, 1, 2};
    int note = 0;
    int tempo[] = {200, 200, 200, 400, 400, 400, 200, 200, 600};
    int breaks[] = {100, 100, 100, 200, 200, 200, 300, 100, 200};
    for (i = 0; i < 9; i = i + 1) {
      note = notes[i];
      digitalWrite(note + 7, HIGH);
      playSound(sounds[note], tempo[i]);
      digitalWrite(note + 7, LOW);
      delay(breaks[i]);
    }
    game_on = 0;
    currentlevel = 1;
    n_levels = n_levels + 2;
    speedfactor = speedfactor + 1;*/
  }
