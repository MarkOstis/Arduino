#include <NTC_TEMP_MODULE.h>

NTC_TEMP_CLASS ntc(0);

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Temp=");
  Serial.println(ntc.GetTemp());
  delay(100);
}
