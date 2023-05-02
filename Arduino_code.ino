int RGB[3]={6,5,3};
int r,g,b;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=0;3>i;i++){
    pinMode(RGB[i],OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!Serial.available()){}
  if(Serial.available()>0){
    r=Serial.parseInt();
    g=Serial.parseInt();
    b=Serial.parseInt();

    analogWrite(RGB[0],r);
    analogWrite(RGB[1],g);
    analogWrite(RGB[2],b);
    }
    delay(100);
  /*  d=a+b+c;
  Serial.print(a);Serial.print(",");
  Serial.print(b);Serial.print(",");
  Serial.print(c);Serial.print(",");
  Serial.println(d);
  delay(500);*/

}
