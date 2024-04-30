#include <MPU6050_tockn.h>
#include <Wire.h>

MPU6050 mpu6050(Wire);
float Error0 = 5;
void setup() {
  Serial.begin(115200);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
}
#define in1 3
#define in2 5
#define in3 6
#define in4 9



float kp=12;
float kd=0;
float ki=0.04;
float errorp;
float errori;
float errord;
float previousError;
void Calc_Error(){
  mpu6050.update();
 Serial.println((int)(mpu6050.getAngleY()));
  errorp=kp*(mpu6050.getAngleY()-Error0);
  errord=kd*(errorp-previousError);
  if(errorp*previousError<0) errori=0;
  else errori+=ki*errorp;
  previousError=errorp;
 // Serial.println((int)((mpu6050.getAngleY()-Error0)*100));
  //Serial.println(errorp);
  
  }

void Pid_control(float P,float i,float d){
if(P>0){
analogWrite(in1,0);
analogWrite(in2,constrain(abs(P+i-d),0,50));
analogWrite(in4,constrain(abs(P+i-d),0,50));
analogWrite(in3,0);}
else { 
analogWrite(in1,constrain(abs(P+i-d),0,50));
analogWrite(in2,0);
analogWrite(in4,0);
analogWrite(in3,constrain(abs(P+i-d),0,50));}  
   
}  
/*void backwards(){
analogWrite(in1,0);
analogWrite(in2,50);
analogWrite(in3,55);
analogWrite(in4,0);
}

void forwards(){
analogWrite(in1,50);
analogWrite(in2,0);
analogWrite(in3,0);
analogWrite(in4,50);
}*/

 


void loop(){
  if ( millis() % 10 <2 ) Calc_Error();
  Pid_control(errorp,errori,0);
//Calc_Error();
//Serial.println(mpu6050.getAngleY());
//delay(100);


}
