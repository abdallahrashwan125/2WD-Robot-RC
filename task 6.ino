
char f =0 ;
char s=0 ;
char b =0 ;
char r = 0 ;
char l = 0 ;
char reading=0;

int en1=5;
int in1=8;
int in2=9;
int en2=6;
int in3=10;
int in4=11;
int on=500;
void setup()
{
  pinMode (en1,1);
  pinMode (in1,1);
  pinMode (in2,1); 
  pinMode (in3,1);
  pinMode (in4,1); 
  pinMode (en2,1);
Serial.begin(9600);
}
void loop (){
if ( Serial.available() > 0 )
{
  reading = Serial.read();
switch (reading ){
case 'f' :
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
  
digitalWrite(en1,1);
digitalWrite(en2,1);
break;
case 'b' :
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);

digitalWrite(en1,1);
digitalWrite(en2,1);
break;
case 'r' :
digitalWrite(in1,0);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
  
digitalWrite(en1,1);
digitalWrite(en2,0);
break;
case 'l' :
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,0);
digitalWrite(in4,0);
  
digitalWrite(en1,0);
digitalWrite(en2,1);
break;
case 's':
digitalWrite(in1,0);
digitalWrite(in2,0);
digitalWrite(in3,0);
digitalWrite(in4,0);

}
}
}

