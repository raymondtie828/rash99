#define segA 2
#define segB 3
#define segC A3
#define segD A4
#define segE A5
#define segF 4
#define segG 5

#define segH 7
#define segI 8
#define segJ 9
#define segK 10
#define segL 11
#define segM 12
#define segN 13

#define joyX A0
#define joyY A1
#define joyZ A2

int countNum = 0;
int xVar = 0;
int yVar = 0;
int button = 0;

void joyDisplay();
void countDisplay();

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT); 
  pinMode(A3, OUTPUT);  
  pinMode(A4, OUTPUT);  
  pinMode(A5, OUTPUT); 
  for (int i = 4; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
}


void loop(){

  xVar = analogRead(joyX);
  yVar = analogRead(joyY);
  button = digitalRead(6);
  
  if (xVar >= 354 && xVar <= 669 && yVar >= 0 && yVar <= 25){
    countNum = 0;
  }
  if (xVar >= 0 && xVar <= 353 && yVar >= 0 &&  yVar <= 130){
    countNum = 1;
  }
  if (xVar >= 0 && xVar <= 97 && yVar >= 131 &&  yVar <= 510){
    countNum = 2;
  }
  if (xVar >= 0 && xVar <= 97 && yVar >= 515 &&  yVar <= 812){
    countNum = 3;
  }
  if (xVar >= 0 && xVar <= 353 && yVar >= 813 &&  yVar <= 1023){
    countNum = 4;
  }
  if (xVar >= 354 && xVar <= 669 && yVar >= 999 &&  yVar <= 1023){
    countNum = 5;
  }
  if (xVar >= 700 && xVar <= 1023 && yVar >= 813 &&  yVar <= 1023){
    countNum = 6;
  }
  if (xVar >= 926 && xVar <= 1023 && yVar >= 515 &&  yVar <= 812){
    countNum = 7;
  }
  if (xVar >= 926 && xVar <= 1023 && yVar >= 131 &&  yVar <= 510){
    countNum = 8;
  }
  if (xVar >= 700 && xVar <= 1023 && yVar >= 0 &&  yVar <= 130){
    countNum = 9;
  }

  joyDisplay();
  if( button == 1){
    countDisplay();
  }
    
  Serial.print(xVar);
  Serial.print("\t");
  Serial.print(yVar);
  Serial.print("\t");
  Serial.print(button);
  Serial.print("\t");
  Serial.println(countNum);

}

void joyDisplay(){
  switch (countNum){
    case 0:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
    break;
  
    case 1:
    digitalWrite(segA, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;
  
    case 2:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
    break;
  
    case 3:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
    break;
  
    case 4:
    digitalWrite(segA, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;
  
    case 5:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;
  
    case 6:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;
  
    case 7:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;
  
    case 8:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;
  
    case 9:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;
  }
}

void countDisplay(){
  switch (countNum){
    case 0:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, HIGH);
    digitalWrite(segM, HIGH);
    digitalWrite(segN, LOW);
    break;
  
    case 1:
    digitalWrite(segH, LOW);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, LOW);
    digitalWrite(segL, LOW);
    digitalWrite(segM, LOW);
    digitalWrite(segN, LOW);
    break;
  
    case 2:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, LOW);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, HIGH);
    digitalWrite(segM, LOW);
    digitalWrite(segN, HIGH);
    break;
  
    case 3:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, LOW);
    digitalWrite(segM, LOW);
    digitalWrite(segN, HIGH);
    break;
  
    case 4:
    digitalWrite(segH, LOW);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, LOW);
    digitalWrite(segL, LOW);
    digitalWrite(segM, HIGH);
    digitalWrite(segN, HIGH);
    break;
  
    case 5:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, LOW);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, LOW);
    digitalWrite(segM, HIGH);
    digitalWrite(segN, HIGH);
    break;
  
    case 6:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, LOW);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, HIGH);
    digitalWrite(segM, HIGH);
    digitalWrite(segN, HIGH);
    break;
  
    case 7:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, LOW);
    digitalWrite(segL, LOW);
    digitalWrite(segM, LOW);
    digitalWrite(segN, LOW);
    break;
  
    case 8:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, HIGH);
    digitalWrite(segM, HIGH);
    digitalWrite(segN, HIGH);
    break;
  
    case 9:
    digitalWrite(segH, HIGH);
    digitalWrite(segI, HIGH);
    digitalWrite(segJ, HIGH);
    digitalWrite(segK, HIGH);
    digitalWrite(segL, LOW);
    digitalWrite(segM, HIGH);
    digitalWrite(segN, HIGH);
    break;
  }
}




