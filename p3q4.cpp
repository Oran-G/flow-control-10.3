long m = millis();
void setup() { 
    Serial.begin(9600);
    
}
 
void loop() {
    long t = m - millis();
    if ((10001 - (t - m)) % 1000 == 0)
    {
        Serial.println(int((t - m) / 1000));
    }
} 
