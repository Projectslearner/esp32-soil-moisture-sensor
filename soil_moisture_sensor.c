/*
   Project name: ESP32 Soil Moisture Sensor
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-soil-moisture-sensor
*/

// Analog pin connected to the soil moisture sensor
const int soilMoisturePin = 34; // ADC1_CH0 on ESP32

// Threshold to determine wet or dry soil
const int dryThreshold = 800; // Adjust this value based on sensor calibration

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the soil moisture value
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Print the soil moisture value to Serial Monitor
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

  // Check if soil is wet or dry based on threshold
  if (soilMoistureValue > dryThreshold) {
    Serial.println("Soil is dry");
  } else {
    Serial.println("Soil is wet");
  }

  delay(1000); // Delay before the next reading
}
