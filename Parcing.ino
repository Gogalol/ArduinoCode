void setup() {
  Serial.begin(9600);
}
void loop() {

  if (Serial.available() > 0){ 
    String data = Serial.readString();
  
  int posX = data.indexOf("X");
  int posY = data.indexOf("Y");

  String X = data.substring(posX,posY);
  String Y = data.substring(posY);

  delay(2000);
  if(X&&Y!=NULL){
    Serial.print("ok");
  }
}
delay(2000);
}