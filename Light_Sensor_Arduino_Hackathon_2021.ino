
const int lightsensor = A0;
const int blueLED = 9;
const int buzzer = 8;
int hella;
boolean bet = false;
void setup() {
  Serial.begin(9600);
  pinMode(blueLED, OUTPUT);
  pinMode(lightsensor, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
     digitalWrite(blueLED, LOW);
     digitialWrite(buzzer, LOW);
     hella = analogRead(lightsensor);
     if(bet == false){
     }
      if (hella > 700) {
        bet = true;
        Serial.println("Fire");
        Serial.println(hella);
        digitalWrite(blueLED, HIGH);
        digitialWrite(buzzer, HIGH);
        delay(200);
        digitalWrite(blueLED, LOW);
        digitialWrite(buzzer, LOW);
        delay(200);
        }
        
     else { 
      digitalWrite(blueLED, LOW);
      digitialWrite(buzzer, LOW);
      bet = false;
     }
   }
