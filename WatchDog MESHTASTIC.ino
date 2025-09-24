#include "LowPower.h"                                    

int h=4; // hours
int m=0; // minutes

int sleepTime = (h*3600)+(m*60);

void setup()
{
  
  Serial.begin(9600);                                    
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void loop() 
{
    Serial.println("Reset 2s on GPIO2"); 
    digitalWrite(2, LOW); // reset
    delay(2000); 
    digitalWrite(2, HIGH); 
    Serial.print("Sleep for ");
    Serial.print(sleepTime);
    Serial.println("s");
    delay(100);
    gosleep();                   
}

void gosleep()
{
    for(int i=1; i<=int(sleepTime/8);i++)
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);          
    Serial.print("Wake up after ");
    Serial.print(sleepTime);
    Serial.println("s");
}