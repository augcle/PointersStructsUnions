int x = 10;
int *p = &x;

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("The value of what p points to is: ");
  Serial.print(*p);
  Serial.println("The address of what p points to is: ");
  Serial.print((uintptr_t)p, HEX);
}

void loop() {
  // put your main code here, to run repeatedly:

}
