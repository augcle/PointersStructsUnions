union Dataform {  // Defines Union
  int intnumb;
  float decnum;
  char letter;
};

void setup() {
  Serial.begin(115200);
  delay(2000);

  union Dataform Data;

  Data.intnumb = 2;
  Serial.println(Data.intnumb); 

  Serial.println("Changing to float"); 
  Data.decnum = 3.8;
  
  Serial.println("The previous part now holds garbage such as:"); 
  Serial.println(Data.intnumb);
  Serial.println("While the float value holds:"); 
  Serial.println(Data.decnum);  
}

void loop() {
  // put your main code here, to run repeatedly:

}
