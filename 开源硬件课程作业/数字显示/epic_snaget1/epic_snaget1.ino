void xianshi(int a)
{
  switch(a)
  {
    case(0):
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    break;
    case(1):
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    break;
    case(2):
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    break;
    case(3):
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    break;
    case(4):
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    break;
    case(5):
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    break;
    case(6):
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    break;
    case(7):
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6,LOW);
    break;
    case(8):
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    break;
    case(9):
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    break;
    
  }
}
void setup()
{
  for(int i=3;i<7;i++)
  pinMode(i, OUTPUT);
  Serial.begin(9600);

}

void loop()
{

  String str = ""; 
  String shu = ""; 
   int i,j=0;
while (Serial.available() > 0) 
{ 
    str += char(Serial.read());
  j++;
}
  for(i=0;i<j;i++)
  {
    xianshi(int(str[i]-48));
    delay(1000);
  }
}
