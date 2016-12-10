#include <Wire.h>
void hR_setup() {
    Serial.println("heart rate sensor başlatılıyor...");
    Wire.begin();
}
void heart_rate() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    while(Wire.available()) {          // slave may send less than requested
        unsigned char c = Wire.read();   // receive heart rate value (a byte)
        Serial.print("Nabız: ");
        Serial.println(c, DEC);         // print heart rate value
    }
    delay(500);
}
