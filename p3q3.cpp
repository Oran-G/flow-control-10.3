void setup() { 
    Serial.begin(9600);
}
 
void loop() {
    long t = millis();
    Serial.println((t / 1000));
} 
