struct Student {   // Defines the struck
  String Name;
  int Age;
  float Grade;
};

void setup() {
  Serial.begin(115200);
  delay(2000);

  struct Student s1;

  s1.Name = "August";  // Sets the values for the struc
  s1.Age = 27;
  s1.Grade = 4.5;

    Serial.println(s1.Name); // Prints the Variables for the struck
    Serial.println(s1.Age);
    Serial.println(s1.Grade);
}

void loop() {
  // put your main code here, to run repeatedly:

}
