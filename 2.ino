int totaltime = 0; //Seconds
int warning_threshold = 3;
int slideswitch_state;

void setup(){
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  slideswitch_state = digitalRead(2);
  while(slideswitch_state == HIGH){
    
    delay(1000);
    slideswitch_state = digitalRead(2);
    totaltime++;
    if(totaltime > warning_threshold){
      Serial.print("Warning: You are keeping the button on for more than ");
      Serial.print(warning_threshold);
      Serial.println("s");
    }
    
  }
  
  if(slideswitch_state == LOW){
    
     Serial.print("Total Time = ");
     Serial.println(totaltime);
    
  }
  
  totaltime = 0; //Resetting the total time to zero
}
