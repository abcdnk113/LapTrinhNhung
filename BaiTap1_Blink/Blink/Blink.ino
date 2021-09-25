// the setup function runs once when you press reset or power the board
int x=0;
void setup()
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  //Doc cong 2, cat vao x
  x= digitalRead(2);
  //kiem tra nut 
  if(x==HIGH){
    //bat led
    digitalWrite(13,HIGH);
  }else{
    //tat led
    digitalWrite(13,LOW);
  }
  delay(1000);
}
