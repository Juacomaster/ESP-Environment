void setup() {
pinMode(BUILTIN_LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
  Serial.println("Hola");
  digitalWrite(BUILTIN_LED, HIGH);
  delay(350);
  digitalWrite(BUILTIN_LED, LOW);
  delay(350);

}
