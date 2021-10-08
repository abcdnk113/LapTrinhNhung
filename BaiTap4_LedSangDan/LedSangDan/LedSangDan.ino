int brightness = 0;
int LED=13;
void setup()
{
  pinMode(LED, OUTPUT);
}
void loop()
{
  for (brightness = 0; brightness <=255 ; brightness +=5){// tăng dần độ sáng của led 
    analogWrite(LED,brightness);
    delay(30);// Độ trễ 30ms
  }
  for (brightness = 255; brightness <=0 ; brightness -=5) { //giảm dần độ sáng của led
  analogWrite(LED,brightness);
    delay(30);}
}
