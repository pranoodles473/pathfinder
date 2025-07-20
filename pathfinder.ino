
int pressed1 = 0;
int pressed2 = 0;
int pressed3 = 0;

int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

void setup() {
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  pinMode(BUT3, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  if (digitalRead(BUT1) == HIGH) {
    pressed1 = 1;
  }

  if (digitalRead(BUT2) == HIGH) {
    pressed2 = 1;
  }

  if (digitalRead(BUT3) == HIGH) {
    pressed3 = 1;
  }

  if (pressed1 == 1 && pressed2 == 1 && pressed3 == 1) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
}