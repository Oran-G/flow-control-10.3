
void setup() { 
    Serial.begin(9600);
    
}
 
void loop() {
    long t =millis();
    //check how far in the cycle it is
    if (t % 2000 >= 1000)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
      digitalWrite(13, LOW);
    }
} 
