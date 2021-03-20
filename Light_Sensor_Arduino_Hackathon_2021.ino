
const int lightsensor = A0;
const int blueLED = 9;
int hella;
boolean bet = false;
void setup() {
  Serial.begin(9600);
  pinMode(blueLED, OUTPUT);
  pinMode(lightsensor, INPUT);
}

void loop() {
     digitalWrite(blueLED, LOW);
     hella = analogRead(lightsensor);
     if(bet == false){
     }
      if (hella > 700) {
        bet = true;
        Serial.println("Fire");
        Serial.println("37.66243,-121.87468");
        Serial.println(hella);
        digitalWrite(blueLED, HIGH);
        delay(200);
        digitalWrite(blueLED, LOW);
        delay(200);
        }
        
     else { 
      digitalWrite(blueLED, LOW);
      bet = false;
     }
   }
