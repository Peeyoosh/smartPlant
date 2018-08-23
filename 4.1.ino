void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}
 

 
void loop() {
  int ML=205;
  int moisture = analogRead(0);
 
  Serial.println(moisture);
 
  if(moisture > ML) {
      digitalWrite(LED_BUILTIN, HIGH);
  } 
  delay(1000);
}
