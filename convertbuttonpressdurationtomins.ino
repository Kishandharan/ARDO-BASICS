int start_time;
int end_time;
int total_time = 0;
int stateIsHigh;
int secs;
int mins;

void setup()
{
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  stateIsHigh = digitalRead(3);
  if(stateIsHigh){
    start_time = millis();
    while(stateIsHigh){
      stateIsHigh = digitalRead(3);
    }
    end_time = millis();
    total_time = (end_time-start_time);//milliseconds
    secs = total_time/1000;
    if(secs>6){
      min;    
    }
    
    
    Serial.print(secs);
    Serial.print("s");
    Serial.print(", ");
    Serial.print(total_time);
    Serial.print("ms, ");
    Serial.print(mins);
    Serial.println("m");
    total_time = 0;
  }
   
}
