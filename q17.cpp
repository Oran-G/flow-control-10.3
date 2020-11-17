void setup() { 
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}
 
void loop() {
    if (analogRead(A0) > 600) { 
        digitalWrite(13, HIGH); 
        digitalWrite(12, LOW);
    }  
    if (analogRead(A0) > 400 && analogRead(A0) < 600) { 
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
    }
    else
    { 
        digitalWrite(12, LOW); 
        digitalWrite(13, LOW);
    }
} 
