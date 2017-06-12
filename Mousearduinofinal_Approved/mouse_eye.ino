int adxl_y,adxl_x,s0,s1,s2,s3,s4;
void setup() {
  Serial.begin(9600);

}

void loop() {
  s0=analogRead(A0);
  s1=analogRead(A1);
  s2=analogRead(A2);
  s3=analogRead(A3);
  s4=analogRead(A4);
  /*
  Serial.print(s0);
  Serial.print(',');
  Serial.print(s1);
  Serial.print(',');
  Serial.print(s2);
  Serial.print(',');
  Serial.print(s3);
  Serial.print(',');
  Serial.println(s4);
  */
  if (s2>200)  Serial.print("z");
  else if((s1>125)&&(s2>140)&&(s4>130))  Serial.print("l");
  else if((s2>125)&&(s2<135)&&(s4>105)&&(s4<120))  Serial.print("r");
  
  adxl_y=analogRead(A5);
  //Serial.println(adxl_y);
  if(adxl_y>370)  Serial.print("d");
  else if(adxl_y<330)  Serial.print("u");

  
  delay(10);  
}
