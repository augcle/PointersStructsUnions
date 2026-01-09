int x = 10;    // Gives x the value 10
int *p = &x;   // Makes a pointer to x

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("The value of what p points to is: ");
  Serial.println(*p);         // Prints what the pointer points to (x)
  Serial.println("The address of what p points to is: ");
  Serial.print((uintptr_t)p, HEX);    // Prints what the pointer points to in hex decimals
}

void loop() {
  // put your main code here, to run repeatedly:

}
