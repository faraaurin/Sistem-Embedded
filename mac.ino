uint64_t chipid;   
void setup() {
 Serial.begin(115200);
}

void loop() {
 chipid=ESP.getEfuseMac();
Serial.printf("ESP32 Chip ID = %04X",(uint16_t)(chipid>>32));
 Serial.printf("%08X\n",(uint32_t)chipid);
 delay(3000);
}
