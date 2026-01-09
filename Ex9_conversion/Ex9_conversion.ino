#include <Arduino.h>

// Define a union Conversion with a float member
union Conversion {
  float f;
  // Add a 4-byte array member to the same union
  byte b[4];
};

void setup() {
  Serial.begin(115200);

  Conversion c;

  // Store a float value in the union
  c.f = 23.7f;

  // Print the float
  Serial.print("Float: ");
  Serial.println(c.f, 2);

  // Print each byte value in the array in hex
  Serial.print("Raw bytes (hex): ");
  for (int i = 0; i < 4; i++) {
    if (c.b[i] < 16) Serial.print("0"); // pæn 2-cifret hex
    Serial.print(c.b[i], HEX);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
  // (nothing here)
}
