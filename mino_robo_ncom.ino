 #include<Servo.h>
int spinleg1=2;
int spinleg2=3;
int spinbod1=4;
int spinbod2=5;
Servo myday1;
Servo myday2;
Servo myday3;
Servo myday4;
int dt=200;
int d=0;
int echopin=9;
int trigpin=8;
int duration;
int dist=0; 
  int bpin=10;
int r=200;
int t=100;
  
void setup() {
  // put your setup code here, to run once:
myday1.attach(spinleg1); 
  myday2.attach(spinleg2);
  myday3.attach(spinbod1);
  myday4.attach(spinbod2);
pinMode(bpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
    digitalWrite(trigpin,HIGH);  
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  duration=pulseIn(echopin,HIGH);
dist=duration/58; 
if (dist<5){
moveback();
moveback();
moveback();
moveback();
moveback();
}
if (dist>=10 ){
  moveforward(); 
 
}

}
void dance1(){
  striaght();
  delay(dt);
myday1.write(20);
myday4.write(170);
delay(dt);
myday1.write(60);
delay(dt);
myday4.write(110);
delay(dt);
myday1.write(20);
myday4.write(170);
delay(dt);
myday1.write(60);
myday4.write(110);
delay(dt);

  striaght();
  delay(t);
myday1.write(30);
myday4.write(160);
delay(t);
myday1.write(60);
delay(t);
myday4.write(110);
delay(t);
myday1.write(30);
myday4.write(160);
delay(t);
myday1.write(60);
myday4.write(110);
delay(dt);

myday1.write(20);
myday4.write(170);
delay(dt);
myday1.write(60);
delay(dt);
myday4.write(110);
delay(dt);
myday1.write(20);
myday4.write(170);
delay(dt);
myday1.write(60);
myday4.write(110);
delay(dt);
}
void dance2(){
myday4.write(60);
delay(dt);
myday4.write(110);
delay(dt);

myday1.write(90);
delay(dt);
myday1.write(60);
delay(dt);

myday4.write(60);
delay(dt);
myday4.write(110);
delay(dt);

myday1.write(90);
delay(dt);
myday1.write(60);
delay(dt);

striaght();
myday2.write(70);
delay(dt);
myday2.write(20);
delay(dt);
 myday2.write(70);
myday2.write(20);
  myday2.write(70);
  myday2.write(20);
  delay(dt);

 striaght();
myday3.write(130);
delay(dt);
myday3.write(90);
delay(dt);
 myday3.write(130);
myday3.write(90);
  myday3.write(130);
  myday3.write(90);
  delay(dt); 
  
 striaght();
  delay(dt);
  myday4.write(140);
delay(dt);
myday1.write(105);
    delay(dt);
    myday4.write(110);
delay(dt);
    myday4.write(140);
    delay(dt);
    myday4.write(110);
      delay(dt);
myday4.write(60);
 delay(t);
    myday4.write(110);
          delay(t);
myday4.write(60);
delay(t);
    myday4.write(110);
       delay(dt);
       myday1.write(60);
        delay(dt);
        striaght();
delay(250);
melody1();
        striaght();
  delay(dt);
  myday4.write(140);
delay(dt);
myday1.write(105);
    delay(dt);
    myday4.write(110);
delay(dt);
    myday4.write(140);
    delay(dt);
    myday4.write(110);
      delay(dt);
myday4.write(60);
 delay(t);
    myday4.write(110);
          delay(t);
myday4.write(60);
delay(t);
    myday4.write(110);
       delay(dt);
       myday1.write(60);
        delay(dt);
        striaght();

        delay(dt);
        myday1.write(10);
  delay(dt);
myday4.write(55);
 delay(dt);
 myday1.write(60);
  delay(dt);
 myday1.write(10);
  delay(dt);
 myday1.write(60);
   delay(dt);
 myday1.write(90);
 delay(dt);
 myday1.write(60);
  delay(t);
 myday1.write(90);
   delay(t);
 myday1.write(60);
   delay(t);
 myday1.write(90);
   delay(t);
    delay(dt);
 myday1.write(60);
 delay(dt);
 striaght();

delay(dt);
myday1.write(90);
delay(t);
myday4.write(60);
delay(dt);
striaght();
delay(dt);
myday1.write(20);
delay(t);
myday4.write(130);
delay(dt);
striaght();

 
}



 void striaght(){
  myday1.write(60);
  myday3.write(90);
}

void moveforward(){
  striaght();
  delay(dt);
   myday1.write(10);
  delay(dt);

 myday1.write(10);
  delay(dt);
myday4.write(60);
 delay(dt);
myday2.write(60);
delay(dt);
myday2.write(20);
myday4.write(120);
myday1.write(80);
delay(dt);
myday4.write(130);
delay(dt);
myday1.write(60);
delay(d);
myday2.write(20);
delay(dt);

myday4.write(140);
delay(dt);
myday1.write(105);
    delay(dt);
     myday4.write(75);
  delay(dt);
   myday3.write(55);
 delay(dt);
 myday1.write(60);
 delay(dt);
 myday4.write(120);
 delay(dt);
 myday3.write(90);
 delay(dt);
myday2.write(20);
delay(dt);

  striaght(); 


}

void melody1(){
  tone(bpin,1000,100);
  delay(r);
  tone(bpin,100,100);
  delay(r);
  tone(bpin,840,100);
  delay(r);
  tone(bpin,100,10);
  delay(r);
  tone(bpin,1000,100);
  delay(r);
  tone(bpin,100,100);
  delay(r);
  tone(bpin,3330,10);
  delay(r);
  tone(bpin,100,100);
  delay(r);
  tone(bpin,100,10);
  delay(r);
  tone(bpin,1000,100);
  delay(r);
  tone(bpin,100,10);
  delay(r);
  tone(bpin,830,100);
  delay(r);
  tone(bpin,740,10);
  delay(r);
  tone(bpin,1000,100);
  delay(r);
  tone(bpin,440,100);
  delay(r);
  tone(bpin,100,100);
  delay(r);
  tone(bpin,10,10);
  delay(r);
}
  void melody2(){
    tone(bpin,1000,100);
  delay(r);
  tone(bpin,100,100);
  delay(r);
  tone(bpin,1000,100);
  delay(r);
  tone(bpin,100,10);
  delay(r);
  tone(bpin,1000,100);
  delay(r);
  tone(bpin,100,100);
  delay(r);
}

void moveback(){
    striaght();
    delay(dt);
     myday1.write(10);
  delay(dt);
myday4.write(60);
 delay(dt);
myday2.write(5);
delay(dt);
myday1.write(80);
delay(dt);
myday4.write(120);
delay(dt);
myday1.write(60);
delay(d);
myday2.write(20);
delay(dt);

myday4.write(140);
delay(dt);
myday1.write(105);
    delay(dt);
  myday3.write(130);
  delay(dt);
 myday4.write(80);
 delay(dt);
 myday1.write(60);
 delay(dt);
 myday4.write(120);
 delay(dt);
 myday3.write(90);
 delay(dt);
myday2.write(20);
delay(dt);
striaght();
}
