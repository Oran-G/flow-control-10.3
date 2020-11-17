int n = 0;
void setup() { 
    Serial.begin(9600); 
    pinMode(13, OUTPUT); 
    
} 
void loop() { 
    if (analogRead(A0) > 600) 
    { 
        digitalWrite(13, HIGH); 
    } 
    else 
    { 
        if (n >= 512) {
            digitalWrite(13, LOW); 
        }
        else if (n <= 1024)
        {
            n = 0;
        }
        else
        {
          digitalWrite(13, HIGH);
        }
          
    }
    delay(1);
    n++;
     
} 
