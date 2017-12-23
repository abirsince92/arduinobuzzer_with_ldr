int ledpin=9;
int sensorValue=0;
int ldr=A0;
int buzzer=7;  
                                              //buzzer's ground pin(-ve) is grouned
                                                      //buzzer's positive pin(+ve) is connected to registor which is connected to pin no 7
                                                      //in case of LDR,One 2.2 KOhm registor is connected with one leg which is connected with angalog pin
                                                      //Other leg of LDR is connected to 5V pin
                                                      //Other pin of registor is connected to ground pin
int ledPin1=13;
int ledPin2=2;
int ledPin3=3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(buzzer,OUTPUT);
   pinMode(ldr,OUTPUT);
  pinMode(ledPin1,OUTPUT);
   pinMode(ledPin2,OUTPUT);
    pinMode(ledPin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 sensorValue = analogRead(ldr); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

//delay(1000);
if(sensorValue<1){
  digitalWrite(ledPin2,HIGH);
  delay(500);
  digitalWrite(ledPin3,HIGH);
  delay(500);
  Serial.println("ROOM IS DARK");
  digitalWrite(ledpin,HIGH);
  tone(buzzer,1000);
  delay(500);
   
}
else{
   digitalWrite(ledpin,LOW);
   delay(500);
  digitalWrite(ledPin3,LOW);
    delay(500);
   digitalWrite(ledPin2,LOW);
     delay(500);
  noTone(buzzer);
  delay(500);
}


}
