#ifndef SENSOR_MONITOR_H
#define SENSOR_MONITOR_H

float getLevelReading(float analogVal) {
  analogVal = (analogVal/1023.0) * 5.0;
  float minMapVal = (LvlSensorMinRes / (LvlSensorMinRes + LvlResValue)) * 5.0;
  float maxMapVal = (LvlSensorMaxRes / (LvlSensorMaxRes + LvlResValue)) * 5.0;
  return map(analogVal, minMapVal, maxMapVal, LvlSensorMinVal, LvlSensorMaxVal);
}

float getBatteryReading(float analogVal) {
  analogVal = (analogVal/1023.0) * 5.0;
  float minMapVal = 0;
  float maxMapVal = (BattResValueA / (BattResValueA + BattResValueB)) * BattMaxVoltage;
  return map(analogVal, minMapVal, maxMapVal, 0, BattMaxVoltage);
}

float getOilPressureReading(float analogVal) {
  analogVal = (analogVal/1023.0) * 5.0;
  float minMapVal = (OilPressSensorMinRes / (OilPressSensorMinRes + OilResValue)) * 5.0;
  float maxMapVal = (OilPressSensorMaxRes / (OilPressSensorMaxRes + OilResValue)) * 5.0;
  return map(analogVal, minMapVal, maxMapVal, OilPressSensorMinVal, OilPressSensorMaxVal);
}

float getTemperatureReading(float analogVal) {
  analogVal = (analogVal/1023.0) * 5.0;
  float minMapVal = (TempSensorMinRes / (TempSensorMinRes + TempResValue)) * 5.0;
  float maxMapVal = (TempSensorMaxRes / (TempSensorMaxRes + TempResValue)) * 5.0;
  return map(analogVal, minMapVal, maxMapVal, TempSensorMinVal, TempSensorMaxVal);
}

int getRPMReading1() {
    unsigned int RPM = (unsigned int)(60000 / (millis() - lastCalcTimeRPM1) * rpm1_count);
    lastCalcTimeRPM1 = millis();
    rpm1_count = 0;
    return RPM;
}

int getRPMReading2() {
    unsigned int RPM = (unsigned int)(60000 / (millis() - lastCalcTimeRPM2) * rpm2_count);
    lastCalcTimeRPM2 = millis();
    rpm2_count = 0;
    return RPM;
}

void interruptRPM1() {
  rpm1_count++;
}

void interruptRPM2() {
  rpm2_count++;
}

#endif
