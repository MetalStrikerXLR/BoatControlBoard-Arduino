#include "global.h"
#include "sensor_monitor.h"

unsigned long previousMillis = 0;
const long interval = 100;

String cmd = "";

//RPM Test
int rpmTest = 0;
int rpmChange = 0;

void setup() {
  Serial.begin(9600);
  Serial1.begin(115200);
  Serial1.setTimeout(200);

  // Send Reset command to UI
  Serial1.print("xFFh");

  defineRelayPins();

  // Initialize all Relay pins as outputs and set their initial state to low (false)
  for (int i = 0; i < numRelays; i++) {
    pinMode(Relay[i], OUTPUT);
    RelayState[i] = false;

    digitalWrite(Relay[i], RelayState[i]);
  }

  // Initialize RPM pins
  pinMode(RPMSensePin1, INPUT_PULLUP);
  pinMode(RPMSensePin2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(RPMSensePin1), interruptRPM1, FALLING);
  attachInterrupt(digitalPinToInterrupt(RPMSensePin2), interruptRPM2, FALLING);
}

void loop() {

  if (Serial1.available() > 0) {

    cmd = Serial1.readString();

    if ((cmd[0] == 'x') && (cmd[3] == 'h'))
    {
      Serial.print("CMD Recv: ");
      Serial.println(cmd);

      if (cmd == "x00h") {
        RelayState[0] = !RelayState[0];
        digitalWrite(Relay[0], RelayState[0]);
        Serial.println("Relay 0 Triggered");
      }

      if (cmd == "x01h") {
        RelayState[1] = !RelayState[1];
        digitalWrite(Relay[1], RelayState[1]);
        Serial.println("Relay 1 Triggered");
      }

      if (cmd == "x02h") {
        RelayState[2] = !RelayState[2];
        digitalWrite(Relay[2], RelayState[2]);
        Serial.println("Relay 2 Triggered");
      }

      if (cmd == "x03h") {
        RelayState[3] = !RelayState[3];
        digitalWrite(Relay[3], RelayState[3]);
        Serial.println("Relay 3 Triggered");
      }

      if (cmd == "x04h") {
        RelayState[4] = !RelayState[4];
        digitalWrite(Relay[4], RelayState[4]);
        Serial.println("Relay 4 Triggered");
      }

      if (cmd == "x05h") {
        RelayState[5] = !RelayState[5];
        digitalWrite(Relay[5], RelayState[5]);
        Serial.println("Relay 5 Triggered");
      }

      if (cmd == "x06h") {
        RelayState[6] = !RelayState[6];
        digitalWrite(Relay[6], RelayState[6]);
        Serial.println("Relay 6 Triggered");
      }

      if (cmd == "x07h") {
        RelayState[7] = !RelayState[7];
        digitalWrite(Relay[7], RelayState[7]);
        Serial.println("Relay 7 Triggered");
      }

      if (cmd == "x08h") {
        RelayState[8] = !RelayState[8];
        digitalWrite(Relay[8], RelayState[8]);
        Serial.println("Relay 8 Triggered");
      }

      if (cmd == "x09h") {
        RelayState[9] = !RelayState[9];
        digitalWrite(Relay[9], RelayState[9]);
        Serial.println("Relay 9 Triggered");
      }

      if (cmd == "x0Ah") {
        RelayState[10] = !RelayState[10];
        digitalWrite(Relay[10], RelayState[10]);
        Serial.println("Relay 10 Triggered");
      }

      if (cmd == "x0Bh") {
        RelayState[11] = !RelayState[11];
        digitalWrite(Relay[11], RelayState[11]);
        Serial.println("Relay 11 Triggered");
      }

      if (cmd == "x0Ch") {
        RelayState[12] = !RelayState[12];
        digitalWrite(Relay[12], RelayState[12]);
        Serial.println("Relay 12 Triggered");
      }

      if (cmd == "x0Dh") {
        RelayState[13] = !RelayState[13];
        digitalWrite(Relay[13], RelayState[13]);
        Serial.println("Relay 13 Triggered");
      }

      if (cmd == "x0Eh") {
        RelayState[14] = !RelayState[14];
        digitalWrite(Relay[14], RelayState[14]);
        Serial.println("Relay 14 Triggered");
      }

      if (cmd == "x0Fh") {
        RelayState[15] = !RelayState[15];
        digitalWrite(Relay[15], RelayState[15]);
        Serial.println("Relay 15 Triggered");
      }

      if (cmd == "x10h") {
        RelayState[16] = !RelayState[16];
        digitalWrite(Relay[16], RelayState[16]);
        Serial.println("Relay 16 Triggered");
      }

      if (cmd == "x11h") {
        RelayState[17] = !RelayState[17];
        digitalWrite(Relay[17], RelayState[17]);
        Serial.println("Relay 17 Triggered");
      }

      if (cmd == "x12h") {
        RelayState[18] = !RelayState[18];
        digitalWrite(Relay[18], RelayState[18]);
        Serial.println("Relay 18 Triggered");
      }

      if (cmd == "x13h") {
        RelayState[19] = !RelayState[19];
        digitalWrite(Relay[19], RelayState[19]);
        Serial.println("Relay 19 Triggered");
      }

      if (cmd == "x14h") {
        RelayState[20] = !RelayState[20];
        digitalWrite(Relay[20], RelayState[20]);
        Serial.println("Relay 20 Triggered");
      }

      if (cmd == "x15h") {
        RelayState[21] = !RelayState[21];
        digitalWrite(Relay[21], RelayState[21]);
        Serial.println("Relay 21 Triggered");
      }

      if (cmd == "x16h") {
        RelayState[22] = !RelayState[22];
        digitalWrite(Relay[22], RelayState[22]);
        Serial.println("Relay 22 Triggered");
      }

      if (cmd == "x17h") {
        RelayState[23] = !RelayState[23];
        digitalWrite(Relay[23], RelayState[23]);
        Serial.println("Relay 23 Triggered");
      }

      if (cmd == "x18h") {
        RelayState[24] = !RelayState[24];
        digitalWrite(Relay[24], RelayState[24]);
        Serial.println("Relay 24 Triggered");
      }

      if (cmd == "x19h") {
        RelayState[25] = !RelayState[25];
        digitalWrite(Relay[25], RelayState[25]);
        Serial.println("Relay 25 Triggered");
      }

      if (cmd == "x1Ah") {
        RelayState[26] = !RelayState[26];
        digitalWrite(Relay[26], RelayState[26]);
        Serial.println("Relay 26 Triggered");
      }

      if (cmd == "x1Bh") {
        RelayState[27] = !RelayState[27];
        digitalWrite(Relay[27], RelayState[27]);
        Serial.println("Relay 27 Triggered");
      }

      if (cmd == "x1Ch") {
        RelayState[28] = !RelayState[28];
        digitalWrite(Relay[28], RelayState[28]);
        Serial.println("Relay 28 Triggered");
      }

      if (cmd == "x1Dh") {
        RelayState[29] = !RelayState[29];
        digitalWrite(Relay[29], RelayState[29]);
        Serial.println("Relay 29 Triggered");
      }

      if (cmd == "x1Eh") {
        RelayState[30] = !RelayState[30];
        digitalWrite(Relay[30], RelayState[30]);
        Serial.println("Relay 30 Triggered");
      }

      if (cmd == "x1Fh") {
        RelayState[31] = !RelayState[31];
        digitalWrite(Relay[31], RelayState[31]);
        Serial.println("Relay 31 Triggered");
      }

      if (cmd == "x20h") {
        RelayState[32] = !RelayState[32];
        digitalWrite(Relay[32], RelayState[32]);
        Serial.println("Relay 32 Triggered");
      }

      if (cmd == "x21h") {
        RelayState[33] = !RelayState[33];
        digitalWrite(Relay[33], RelayState[33]);
        Serial.println("Relay 33 Triggered");
      }

      if (cmd == "x22h") {
        RelayState[34] = !RelayState[34];
        digitalWrite(Relay[34], RelayState[34]);
        Serial.println("Relay 34 Triggered");
      }
    }
  }

  if (millis() - previousMillis >= interval) {
    previousMillis = millis();

    String LvlSenseVal1 = String(getLevelReading(analogRead(LvlSensePin1)), 1);
    String LvlSenseVal2 = String(getLevelReading(analogRead(LvlSensePin2)), 1);
    String LvlSenseVal3 = String(getLevelReading(analogRead(LvlSensePin3)), 1);
    String LvlSenseVal4 = String(getLevelReading(analogRead(LvlSensePin4)), 1);
    String LvlSenseVal5 = String(getLevelReading(analogRead(LvlSensePin5)), 1);

    String BattSenseVal1 = String(getBatteryReading(analogRead(BattSensePin1)), 1);
    String BattSenseVal2 = String(getBatteryReading(analogRead(BattSensePin2)), 1);

    String OilSenseVal1 = String(getOilPressureReading(analogRead(OilPresSensePin1)), 1);
    String OilSenseVal2 = String(getOilPressureReading(analogRead(OilPresSensePin2)), 1);

    String TempSenseVal1 = String(getTemperatureReading(analogRead(TempSensePin1)), 1);
    String TempSenseVal2 = String(getTemperatureReading(analogRead(TempSensePin2)), 1);

    String RPMSenseVal1 = String(getRPMReading1());
    String RPMSenseVal2 = String(getRPMReading2());

//    // RPM Test (Comment if not in use)
//    if (rpmTest >= 6000)
//      rpmChange = -1;
//
//    if (rpmTest <= 0)
//      rpmChange = 1;
//
//    rpmTest = rpmTest + rpmChange;
//    RPMSenseVal1 = String(rpmTest);
//    RPMSenseVal2 = String(rpmTest);
    
    Serial1.print(":L1:" + LvlSenseVal1);
    Serial1.print(":L2:" + LvlSenseVal2);
    Serial1.print(":L3:" + LvlSenseVal3);
    Serial1.print(":L4:" + LvlSenseVal4);
    Serial1.print(":L5:" + LvlSenseVal5);
    Serial1.print(":B1:" + BattSenseVal1);
    Serial1.print(":B2:" + BattSenseVal2);
    Serial1.print(":O1:" + OilSenseVal1);
    Serial1.print(":O2:" + OilSenseVal2);
    Serial1.print(":T1:" + TempSenseVal1);
    Serial1.print(":T2:" + TempSenseVal2);
    Serial1.print(":RPM1:" + RPMSenseVal1);
    Serial1.print(":RPM2:" + RPMSenseVal2);
  }
}
