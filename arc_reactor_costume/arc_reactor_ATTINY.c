const int redPin = 0; 
const int grnPin = 1;
const int bluPin = 2;
const int button = 3;

int flash = 7;
int buttonState = 0;

//ATTINY program for flashing RGB led for arc reactor costume 
//Avery VanKirk 2014

void setup()
{
  pinMode(redPin, OUTPUT);    
  pinMode(grnPin, OUTPUT);    
  pinMode(bluPin, OUTPUT);
  pinMode(button, INPUT);

  digitalWrite(button,HIGH);
  digitalWrite(bluPin, HIGH);
  digitalWrite(redPin, HIGH);
  digitalWrite(grnPin, HIGH);
}

void loop(){
  delay(400); //for button input
  buttonState = digitalRead(button);
  //Standard blue
  while (buttonState == HIGH){

    digitalWrite(bluPin,LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(grnPin,LOW);
    delay(2.5);
    digitalWrite(redPin,HIGH);
    digitalWrite(grnPin,HIGH);
    delay(48);
    buttonState = digitalRead(button);
  }
  delay(400);
  buttonState = digitalRead(button);
  //War Machine
  while (buttonState == HIGH){
    
    digitalWrite(redPin,LOW);
    digitalWrite(grnPin,HIGH);
    digitalWrite(bluPin,HIGH);
    
    delay(100);
    digitalWrite(redPin,HIGH);
    delay(10);
    
    buttonState = digitalRead(button);
  }
   
  //Off
  delay(400);
  buttonState = digitalRead(button);
  while(buttonState == HIGH){
    digitalWrite(redPin,HIGH);
    digitalWrite(grnPin,HIGH);
    digitalWrite(bluPin,HIGH);
    buttonState = digitalRead(button);
  }  
  
}
