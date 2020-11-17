void setup() { 
    Serial.begin(9600);
}
 
void loop() {
    for (int i = 10; i >= 0; i--)
    {
        Serial.println(i);
    }
    Serial.println("blastoff!");
    while (true){}
} 
