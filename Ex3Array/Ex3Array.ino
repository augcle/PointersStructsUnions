int array[5] = {10,11,12,13,14};
int *p = array;

void setup() {
  Serial.begin(115200);
  delay(2000);

  for(int i=0; i<5; i++) {
    Serial.println(*(p+i));
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
