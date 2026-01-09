float temperature = 36.6;     // Gives the variable temperature random value
float *p = &temperature;      // Adds a pointer to the temperature

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("The value of what p points to is: ");
  Serial.println(*p);            // Prints what the pointer points to (Temperature)

  Serial.println("Updating temperature....");
  *p = 38.2;                    // Changes what the pointer is pointing toes values (temperature = 38.2)

  Serial.println("The value of what p points to is now: ");
  Serial.println(temperature);  //try and print the temperature again to see if it changed
}

void loop() {
  // put your main code here, to run repeatedly:

}
