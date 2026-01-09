float temperature = 36.6;  // Defines temperature to a random values
float *p = &temperature;   // Defines first pointer to the temperature
float **pp = &p;           // Defines the second pointer to the first pointer

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("The value of temperature is: ");
  Serial.println(temperature);

  Serial.println("The value of what p points to is: ");
  Serial.println(*p);

  Serial.println("The value of what pp points to is now: ");
  Serial.println(**pp);

  Serial.println("Updating temperature....");
  temperature = 38.2;

  Serial.println("The value of what pp points to is now: ");
  Serial.println(**pp);
}

void loop() {
  // put your main code here, to run repeatedly:

}
