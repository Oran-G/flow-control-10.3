void setup() { 
    Serial.begin(9600);
}
 
void loop() {
    long t = millis();
    Serial.print("Time: ");
    Serial.println(t);
} 
