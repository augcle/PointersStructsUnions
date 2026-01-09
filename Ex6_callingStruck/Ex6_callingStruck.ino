#include <Arduino.h>


// Define a Car struct with make and year
struct Car {
  String make;
  int year;
};

// Write a function that accepts a Car parameter
void printCar(struct Car c) {
  // Inside the function, print make and year
  Serial.print("Make: ");
  Serial.println(c.make);

  Serial.print("Year: ");
  Serial.println(c.year);
}

void setup() {
  Serial.begin(115200);

  // Create a Car value and call the function
  struct Car myCar;
  myCar.make = "Toyota";
  myCar.year = 2015;

  printCar(myCar);
}

void loop() {
  // (nothing here)
}
