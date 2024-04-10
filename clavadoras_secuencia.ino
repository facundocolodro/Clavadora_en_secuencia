/*byte led[4] = {1,2,3,4};

void setup(){
  for(byte pin=0; pin<4; pin++){
    pinMode(led[pin], OUTPUT);
  }
}

void loop(){
  for(int i=0; i<4; i++){
    digitalWrite(led[i], HIGH);
    delay(100);
    digitalWrite(led[i], LOW);
    delay(250);
  }
  delay(1500);
}*/

#define BUTON_PIN 13

const byte led[3] = {2,3,4}; // Cambié los pines para que no utilicen el pin 1

unsigned int button_status = 0; // Define el pin del botón

void setup() {
  for (byte pin = 0; pin < 3; pin++) {
    pinMode(led[pin], OUTPUT);
  }

  pinMode(BUTON_PIN, INPUT_PULLUP); // Configura el pin del botón como entrada con resistencia pull-up interna
}

void loop() {
  // Lee el estado del botón
  button_status = digitalRead(BUTON_PIN);

  // Si el botón está presionado, activa el programa
  if (button_status == 0){
    for (int i = 0; i < 3; i++) {
      delay(350);
      digitalWrite(led[i], HIGH);
      delay(350);
      digitalWrite(led[i], LOW);
    }
  }
}