
char command;
String string;
boolean ledon = false;
#define ledPin 13

  void setup()
  {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
  }

  void loop()
  {
    if (Serial.available() > 0) 
    {string = "";}
    
    while(Serial.available() > 0)
    {
      command = ((byte)Serial.read());
      
      if(command == ':')
      {
        break;
      }
      
      else
      {
        string += command;
      }
      
      delay(1);
    }
    
    if(string == "TO")
    {
        digitalWrite(ledPin, HIGH);
        delay(5000);
        digitalWrite(ledPin, LOW);
        delay(5000);
        Serial.println("on/off every 5s");  
        //ledon = true;
    }
    
    if(string =="TF")
    {
        //ledOff();
        //ledon = false;
        //Serial.println(string);
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        delay(500);
        Serial.println("on/off every 0.5s");
    }
    
//    if ((string.toInt()>=0)&&(string.toInt()<=255))
//    {
//      if (ledon==true)
//      {
//        analogWrite(led, string.toInt());
//        Serial.println(string);
//        delay(10);
//      }
//    }
 }
 
//void ledOn()
//   {
//      analogWrite(led, 255);
//      delay(10);
//    }
// 
// void ledOff()
// {
//      analogWrite(led, 0);
//      delay(10);
// }
 
