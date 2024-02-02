int red =7;
  int green =8;
  int yallow =13;
  int on =1000;
  int off =1000;
void setup() {
  
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(13,OUTPUT);

}

void loop() {
 
  digitalWrite(red,HIGH);
  delay(on);
  digitalWrite(green,HIGH);
  delay(on);
   digitalWrite(green,LOW);
   delay(off);
   digitalWrite(green,HIGH);
   delay(on);
   digitalWrite(green,LOW);
   delay(off);
   digitalWrite(green,HIGH);
   delay(on);
   digitalWrite(green,LOW);
   digitalWrite(red,LOW);
   delay(off);
   digitalWrite(yallow,HIGH);
   delay(on);
   digitalWrite(yallow,LOW);
delay(off);
}
