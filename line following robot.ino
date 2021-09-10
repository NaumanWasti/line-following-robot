   
   int leftmotorforward     = 3;  
   int leftmotorbackward      = 6;   //backward not necessary to write
   int rightmotorforward      = 4; 
   int rightmotorbackward      = 5;  //backward not necessary to write

   int value1;
   int value2;
   

   int left =A0;
   int right =A1;

  
  
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  pinMode(left);   //no need to write it (left,INPUT) because analog is always input
  pinMode(right);
  Serial.begin(9600);
  
}

void loop() {
  
value1= analogRead(left);
value2 = analogRead(right);

if(value1 < 500 && value2 > 500)
{
  
  digitalWrite (3,HIGH);  //left wali onn haii so right p turn krega,baqi sb off
  digitalWrite(6,LOW);                       
  digitalWrite (4,LOW);
  digitalWrite(5,LOW);  //backward wali na bhi lkhen to koi farq nhi


  
  }
else if(value1 > 500 && value2 < 500){
  
  digitalWrite (3,LOW);
  digitalWrite(6,HIGH);   //right wali onn haii so left p turn krega,baqi sb off             
  digitalWrite (4,LOW);
  digitalWrite(5,LOW);



  }

else if(value1 < 500 && value2 < 500){
{

  digitalWrite (3,HIGH);
  digitalWrite(6,HIGH);   //right wali and right wali dono onn haii so forward move krega,baqi backward na lkho ya off krdo 1 bat             
  digitalWrite (4,LOW);
  digitalWrite(5,LOW);
  
  }

else
{
  digitalWrite (3,LOW);  //sb off so stop hoygi
  digitalWrite(6,LOW);
  digitalWrite (4,LOW);
  digitalWrite(5,LOW);

}

 
}










 