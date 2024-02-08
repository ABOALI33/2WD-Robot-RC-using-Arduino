int M1=2;
int M2=3;
int M3=4;
int M4=5;
int EN1=10;
int EN2=11;
int read;


void setup() {
//Motor 1
pinMode(M1,OUTPUT);
pinMode(M2,OUTPUT);
pinMode(EN1,OUTPUT);
//Motor 1
pinMode(M4,OUTPUT);
pinMode(M4,OUTPUT);
pinMode(EN2,OUTPUT);
Serial.begin(9600);

}

void loop() {

if (Serial.available()>0){
  char reading=Serial.read();
  switch(reading){
    case 'F':digitalWrite(M1,1);
             digitalWrite(M2,0);
    
             digitalWrite(M3,1);
             digitalWrite(M4,0);
    
             analogWrite(EN1,127);
             analogWrite(EN2,127);
             Serial.println("forward");
              break;

    case 'B':digitalWrite(M1,0);
             digitalWrite(M2,1);
             digitalWrite(M3,0);
             digitalWrite(M4,1);
             analogWrite(EN1,127);
             analogWrite(EN2,127);
             Serial.println("backward");
              break;
    
    case 'L':digitalWrite(M1,1);
             digitalWrite(M2,0);
             digitalWrite(M3,0);
             digitalWrite(M4,0);
             analogWrite(EN1,127);
             analogWrite(EN2,127);
             Serial.println("Turn left");
              break;


             
      case 'R':digitalWrite(M1,0);
             digitalWrite(M2,0);
             digitalWrite(M3,1);
             digitalWrite(M4,0);
             analogWrite(EN1,127);
             analogWrite(EN2,127);
             Serial.println("Turn right");
              break;
             
     case 'S':digitalWrite(M1,0);
             digitalWrite(M2,0);
             digitalWrite(M3,0);
             digitalWrite(M4,0);
             analogWrite(EN1,0);
             analogWrite(EN2,0);
             Serial.println("Stop");
              break;


  } }}