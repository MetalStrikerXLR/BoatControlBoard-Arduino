#ifndef GLOBAL_H
#define GLOBAL_H

// Level Sensor
const int LvlSensePin1 = A1;
const int LvlSensePin2 = A2;
const int LvlSensePin3 = A3;
const int LvlSensePin4 = A4;
const int LvlSensePin5 = A5;

const float LvlResValue = 100.0;    // Pysical resistor value
const float LvlSensorMinRes = 0.0; 
const float LvlSensorMaxRes = 190.0;
const float LvlSensorMinVal = 150.0;
const float LvlSensorMaxVal = 1000.0;

// Battery Sensor
const int BattSensePin1 = A6;
const int BattSensePin2 = A7;

const float BattMaxVoltage = 24.0;
const float BattResValueA = 1000.0;    // Pysical resistor 1 value (From which voltage is being read)
const float BattResValueB = 5000.0;    // Pysical resistor 2 value

// Oil Pressure Sensor
const int OilPresSensePin1 = A8;
const int OilPresSensePin2 = A9;

const float OilResValue = 100;    // Pysical resistor value
const float OilPressSensorMinRes = 10.0; 
const float OilPressSensorMaxRes = 184.0;
const float OilPressSensorMinVal = 0.0;
const float OilPressSensorMaxVal = 1.0;

// Temperature Sensor
const int TempSensePin1 = A10;
const int TempSensePin2 = A11;

const float TempResValue = 100;    // Pysical resistor value
const float TempSensorMinRes = 338.0; 
const float TempSensorMaxRes = 13.6; 
const float TempSensorMinVal = 40.0;
const float TempSensorMaxVal = 140.0;

// RPM Sensor
const int RPMSensePin1 = 6;
const int RPMSensePin2 = 7;
unsigned int rpm1_count;
unsigned int rpm2_count;
unsigned long lastCalcTimeRPM1 = 0;
unsigned long lastCalcTimeRPM2 = 0;

// Relays
const int numRelays = 35;
int Relay[numRelays];
bool RelayState[numRelays];

// Define Relay Pin Connections
void defineRelayPins() {
  Relay[0] = 2;
  Relay[1] = 3;
  Relay[2] = 4;
  Relay[3] = 22;
  Relay[4] = 23;
  Relay[5] = 24;
  Relay[6] = 25;
  Relay[7] = 26;
  Relay[8] = 27;
  Relay[9] = 28;
  Relay[10] = 29;
  Relay[11] = 30;
  Relay[12] = 31;
  Relay[13] = 32;
  Relay[14] = 33;
  Relay[15] = 34;
  Relay[16] = 35;
  Relay[17] = 36;
  Relay[18] = 37;
  Relay[19] = 38;
  Relay[20] = 39;
  Relay[21] = 40;
  Relay[22] = 41;
  Relay[23] = 42;
  Relay[24] = 43;
  Relay[25] = 44;
  Relay[26] = 45;
  Relay[27] = 46;
  Relay[28] = 47;
  Relay[29] = 48;
  Relay[30] = 49;
  Relay[31] = 50;
  Relay[32] = 51;
  Relay[33] = 52;
  Relay[34] = 53;
}

#endif
