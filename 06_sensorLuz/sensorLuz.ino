void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  int lectura;
  lectura = analogRead(A0);
  Serial.println(lectura);
  if(lectura<=500){
    digitalWrite(7,LOW);
  } else {
    digitalWrite(7,HIGH);
    }
  delay(250);
}
