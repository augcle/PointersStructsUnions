union Dataform {  // Defines a union structure called Dataform
  int intnumb;
  float decnum;
  char letter;
};

void setup() {
  Serial.begin(115200);
  delay(2000);

  union Dataform Data; // Create a union called data of the structure 'Dataform'

  Data.intnumb = 2; // Set the variable intnumb in the union Data
  Serial.println(Data.intnumb);  // Print the value intnumb

  Serial.println("Changing to float"); 
  Data.decnum = 3.8; // Set the variable decnum in the union Data
  
  Serial.println("The previous part now holds garbage such as:"); 
  Serial.println(Data.intnumb); // The  current value for intnumb
  Serial.println("While the float value holds:"); 
  Serial.println(Data.decnum);  // The value for decnum
} // The whole point of this is to show that union only holds one variable at a time

void loop() {
// It's empty here...
}
