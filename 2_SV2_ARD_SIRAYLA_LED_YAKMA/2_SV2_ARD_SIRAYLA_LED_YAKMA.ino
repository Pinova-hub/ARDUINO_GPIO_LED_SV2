int Led [ ] = {22,23,24,25,26,27,28,29,30,31};

void setup() {
  
    for(int i=0; i<10; i++) 
    
    {
    pinMode(Led [i], OUTPUT);
    }
    
}

void loop() {
  
int Sayici = 0; 
                                  
    while (Sayici < 10) 
    
    {
    digitalWrite(Led [Sayici], HIGH);             
    delay(1000);
    digitalWrite(Led [Sayici], LOW);
    delay (1000);
    Sayici++;  
    }
    
}

                                               
