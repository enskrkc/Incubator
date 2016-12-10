/*  Sicaklik sensörü bağlantısı
      1. pin Vcc 2. pin data 3. pin NC 4. pin gnd
      1. pin ve 2. pin arasına 10k direnç

     Heart Rate sensör ölçümü

     SCL=> A5
     SDA=> A4
     VCC=> 5V
     GND
*/


void setup() {

  Serial.begin(9600);
  Wire.begin();

  hR_setup();
  sicaklik_ve_nem_setup();
}
void loop() {
  sicaklik_oku();
  heart_rate();

}

