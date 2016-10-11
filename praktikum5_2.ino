void setup() {
 Serial.begin(115200);
}
void loop() {
 Serial.write(0x44);
 Serial.write(0x01);
 Serial.write(0x02);
 Serial.write(0x03);
 Serial.write(0x04);
 
 delay(2000);
} 

