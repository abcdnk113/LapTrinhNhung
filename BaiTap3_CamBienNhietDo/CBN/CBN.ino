void setup()
{
  pinMode(10,OUTPUT);
 }
 
void loop()
{
  int GiaTri = analogRead(A0);
  int NhietDo=map(GiaTri,0,410,-50,150);
  if(NhietDo>37)
    digitalWrite(10,HIGH);
  else
    digitalWrite(10,LOW);
  delay(1000);
}
