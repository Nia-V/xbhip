bool timestamp = 0;
void setup() {
pinMode(A0, INPUT);
Serial.begin(9600);
}
void loop() {
int a = analogRead(A0);
  if(a <=1023 && a!= 0){
if(millis()%5000 == 0){
Serial.println(a);
}
}
}