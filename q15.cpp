void setup() { 
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}
 
void loop() {
    if (analogRead(A0) > 600) { 
        digitalWrite(13, HIGH); 
    }  
    if (analogRead(A0) > 400 && analogRead(A0) < 600) { 
        digitalWrite(12, HIGH);
    }
    else
    { 
        digitalWrite(12, LOW); 
        digitalWrite(13, LOW);
    }
} 
