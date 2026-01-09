int array[5] = {10,11,12,13,14};  // Adds values to array of 5
int *p = array;                   // adds a pointer to array

void setup() {
  Serial.begin(115200);
  delay(2000);

  for(int i=0; i<5; i++) {      // Goes through array, and points to each one number in the array and prints
    Serial.println(*(p+i));
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
