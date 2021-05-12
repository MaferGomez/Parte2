String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete
 
void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  inputString.reserve(200);
}
 
void loop()
{
  if (stringComplete) 
  {
    if (inputString == "LEDON_") 
    {
      digitalWrite(8, HIGH);
    }
    else if (inputString == "LEDOFF_")
    {
      digitalWrite(8, LOW);
    }
    inputString = "";
    stringComplete = false;
  }
}
void serialEvent() 
{
  while (Serial.available()) 
  {
    char inChar = Serial.read();
    inputString += inChar;
    if (inChar == '_') 
    {
      stringComplete = true;
    }
  }
}
