//code write by Moz for YouTube changel LogMaker360, 21-9-2015
//code belongs to this video:https://www.youtube.com/watch?v=9RO03TIiSDU

#define sensorPin 4 // select the input pin for the potentiometer

int sensorValue = 0; // variable to store the value coming from the sensor
int lastValue = 0;
int counter = 0;
 
void setup () 
{
  Serial.begin (9600);
}
 
void loop () 
{

 sensorValue = analogRead(sensorPin);  
  if (sensorValue == lastValue)
  {
   
    Serial.println("No temperture change.");
  }  
  else if(sensorValue < lastValue) //thea cup
  {
    Serial.print(" temperature rises. Value = ");
    Serial.println(sensorValue);
  }
  else if(sensorValue > lastValue ){ //last option ice cube 
    if(counter== 0){
      Serial.println("Start");
    }
    Serial.print(" temperature dropped. Value = ");
    Serial.println(sensorValue);
  }
  counter++;
  lastValue = sensorValue;
  delay(5000);
}
