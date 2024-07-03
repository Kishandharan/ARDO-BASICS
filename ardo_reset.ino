void(* reset)(void) = 0; //Creating a function to reset the Arduino board

void setup()
{
  Serial.begin(9600); //Initializing Serial communication
  Serial.println("Starting..."); //Printing "Start..." in the Serial monitor
  delay(1000); //Delaying 1000 milliseconds (one second)
}

void loop()
{
  Serial.println("Resetting..."); //Printing "Resetting" to the Serial monitor
  delay(1000); //Delaying 1000 milliseconds (one second) 
  reset(); //Calling the "reset" function to reset the Arduino board
}
