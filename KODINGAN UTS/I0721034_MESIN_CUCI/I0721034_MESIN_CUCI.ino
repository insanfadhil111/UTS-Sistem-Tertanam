int BTN1=13;
int BTN2=12;
int BTN3=11;
int BTN4=4;
int LED1=10;
int LED2=9;
int LED3=8;
int LED4=3;
int PIEZO=2;
int CCW=5;
int CW=6;
int ENM=7;

void setup(){
pinMode(BTN1,INPUT);
pinMode(BTN2,INPUT);
pinMode(BTN3,INPUT);
pinMode(BTN4,INPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(PIEZO,OUTPUT);
pinMode(CCW,OUTPUT);
pinMode(CW,OUTPUT);
pinMode(ENM,OUTPUT);
digitalWrite(CW,LOW);
digitalWrite(CCW,LOW);
  
}

void loop(){
  if(digitalRead(BTN1)==HIGH && digitalRead(BTN2)==LOW && digitalRead(BTN3)==LOW && digitalRead(BTN4)==LOW){
    //Wash
    digitalWrite(LED1, HIGH);
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);

    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);

    digitalWrite(LED1,LOW);
    digitalWrite(PIEZO,HIGH);
    }
  
  else if(digitalRead(BTN2)==HIGH && digitalRead(BTN1)==LOW && digitalRead(BTN3)==LOW && digitalRead(BTN4)==LOW){
    //Rinse
    digitalWrite(LED2, HIGH);
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);

    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);
    
    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);
    
    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);

    digitalWrite(LED2,LOW);
    digitalWrite(PIEZO,HIGH);
    }

  else if(digitalRead(BTN3)==HIGH && digitalRead(BTN1)==LOW && digitalRead(BTN2)==LOW && digitalRead(BTN4)==LOW){
    //Spin
    digitalWrite(LED3, HIGH);
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED4, LOW);
    delay(3000);

    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(4000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);

    digitalWrite(LED3,LOW);
    digitalWrite(PIEZO,HIGH);
    }
    
  else if(digitalRead(BTN4)==HIGH && digitalRead(BTN1)==LOW && digitalRead(BTN2)==LOW && digitalRead(BTN3)==LOW){
    //Auto
    digitalWrite(LED4, HIGH);
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED1, HIGH);

    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);

    digitalWrite(LED1,LOW);
    digitalWrite(PIEZO,HIGH);
    delay(3000);

    digitalWrite(LED4, HIGH);
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);

    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);
    
    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);
    
    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(10000);
    digitalWrite(CW,LOW);
    digitalWrite(CCW,HIGH);
    delay(10000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);

    digitalWrite(LED2,LOW);
    digitalWrite(PIEZO,HIGH);
    delay(3000);

    digitalWrite(LED4, HIGH);
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);

    analogWrite(ENM,128);
    digitalWrite(CW,HIGH);
    digitalWrite(CCW,LOW);
    delay(4000);
    analogWrite(ENM,0);
    digitalWrite(CCW,LOW);
    digitalWrite(CW,LOW);

    digitalWrite(LED3,LOW);
    digitalWrite(PIEZO,HIGH);
    delay(3000);
    
    }
  
  }
