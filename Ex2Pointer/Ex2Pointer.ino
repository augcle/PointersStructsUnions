float temperature = 36.6;
float *p = &temperature;

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("The value of what p points to is: ");
  Serial.println(*p);

  Serial.println("Updating temperature....");
  *p = 38.2;

  Serial.println("The value of what p points to is now: ");
  Serial.println(temperature);
}

void loop() {
  // put your main code here, to run repeatedly:

}
