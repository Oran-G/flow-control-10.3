void setup() { 
    Serial.begin(9600);
}
 
void loop() {
    int i = 0;
    while(i <= 10)
    {
        Serial.println(1);
        i++;
    }
} 
