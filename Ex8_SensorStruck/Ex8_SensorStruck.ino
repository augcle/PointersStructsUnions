// Define a Sensor struct with a name field
struct Sensor {

  String name;

  // Inside Sensor, include a union with temperature, humidity, status
  union {
    float temperature;
    int humidity;
    char status;
  } data;
};

void setup() {
  Serial.begin(115200);

  // Create a Sensor value
  struct Sensor s;

  s.name = "TempSensor1";

  // Store a temperature value in the union
  s.data.temperature = 23.7f;

  // Print the sensor name and temperature
  Serial.print("Sensor name: ");
  Serial.println(s.name);

  Serial.print("Temperature: ");
  Serial.println(s.data.temperature, 2);
}

void loop() {
  // (nothing here)
}
