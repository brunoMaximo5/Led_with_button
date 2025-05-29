int led = 13;
int botao = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(botao) == LOW) {
    digitalWrite(led, HIGH);  // acende o LED
  } else {
    digitalWrite(led, LOW);   // apaga o LED
  }
}
