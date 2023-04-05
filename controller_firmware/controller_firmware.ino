#include "global.h"
#include "sensor_monitor.h"

unsigned long previousMillis = 0;
const long interval = 100;

String CMD = "";

//RPM Test
int rpmTest = 0;
int rpmChange = 0;

void setup() {
  Serial.begin(115200);
  Serial1.setTimeout(200);

  // Send Reset command to UI
  CMD = "xFFh";

  defineRelayPins();

  // Initialize all Relay pins as outputs and set their initial state to low (true)
  for (int i = 0; i < numRelays; i++) {
    pinMode(Relay[i], OUTPUT);
    RelayState[i] = true;

    digitalWrite(Relay[i], RelayState[i]);
  }

  // Initialize RPM pins
  pinMode(RPMSensePin1, INPUT_PULLUP);
  pinMode(RPMSensePin2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(RPMSensePin1), interruptRPM1, FALLING);
  attachInterrupt(digitalPinToInterrupt(RPMSensePin2), interruptRPM2, FALLING);

  delay(2000);
}

void loop() {

  if (Serial.available() > 3) {

    char character;
    CMD = "";

    while (Serial.available()) {
      character = Serial.read();
      CMD.concat(character);
    }

    if ((CMD[0] == 'x') && (CMD[3] == 'h'))
    {
      if (CMD == "xAKh") {
        // Set initial state to low (true) for All relays
        for (int i = 0; i < numRelays; i++) {
          RelayState[i] = true;
          digitalWrite(Relay[i], RelayState[i]);
        }
      }

      if (CMD == "x00h") {
        RelayState[0] = !RelayState[0];
        digitalWrite(Relay[0], RelayState[0]);
      }

      if (CMD == "x01h") {
        RelayState[1] = !RelayState[1];
        digitalWrite(Relay[1], RelayState[1]);
      }

      if (CMD == "x02h") {
        RelayState[2] = !RelayState[2];
        digitalWrite(Relay[2], RelayState[2]);
      }

      if (CMD == "x03h") {
        RelayState[3] = !RelayState[3];
        digitalWrite(Relay[3], RelayState[3]);
      }

      if (CMD == "x04h") {
        RelayState[4] = !RelayState[4];
        digitalWrite(Relay[4], RelayState[4]);
      }

      if (CMD == "x05h") {
        RelayState[5] = !RelayState[5];
        digitalWrite(Relay[5], RelayState[5]);
      }

      if (CMD == "x06h") {
        RelayState[6] = !RelayState[6];
        digitalWrite(Relay[6], RelayState[6]);
      }

      if (CMD == "x07h") {
        RelayState[7] = !RelayState[7];
        digitalWrite(Relay[7], RelayState[7]);
        Serial.println("Relay 7 Triggered");
      }

      if (CMD == "x08h") {
        RelayState[8] = !RelayState[8];
        digitalWrite(Relay[8], RelayState[8]);
      }

      if (CMD == "x09h") {
        RelayState[9] = !RelayState[9];
        digitalWrite(Relay[9], RelayState[9]);
      }

      if (CMD == "x0Ah") {
        RelayState[10] = !RelayState[10];
        digitalWrite(Relay[10], RelayState[10]);
      }

      if (CMD == "x0Bh") {
        RelayState[11] = !RelayState[11];
        digitalWrite(Relay[11], RelayState[11]);
      }

      if (CMD == "x0Ch") {
        RelayState[12] = !RelayState[12];
        digitalWrite(Relay[12], RelayState[12]);
      }

      if (CMD == "x0Dh") {
        RelayState[13] = !RelayState[13];
        digitalWrite(Relay[13], RelayState[13]);
      }

      if (CMD == "x0Eh") {
        RelayState[14] = !RelayState[14];
        digitalWrite(Relay[14], RelayState[14]);
      }

      if (CMD == "x0Fh") {
        RelayState[15] = !RelayState[15];
        digitalWrite(Relay[15], RelayState[15]);
      }

      if (CMD == "x10h") {
        RelayState[16] = !RelayState[16];
        digitalWrite(Relay[16], RelayState[16]);
      }

      if (CMD == "x11h") {
        RelayState[17] = !RelayState[17];
        digitalWrite(Relay[17], RelayState[17]);
      }

      if (CMD == "x12h") {
        RelayState[18] = !RelayState[18];
        digitalWrite(Relay[18], RelayState[18]);
      }

      if (CMD == "x13h") {
        RelayState[19] = !RelayState[19];
        digitalWrite(Relay[19], RelayState[19]);
      }

      if (CMD == "x14h") {
        RelayState[20] = !RelayState[20];
        digitalWrite(Relay[20], RelayState[20]);
      }

      if (CMD == "x15h") {
        RelayState[21] = !RelayState[21];
        digitalWrite(Relay[21], RelayState[21]);
      }

      if (CMD == "x16h") {
        RelayState[22] = !RelayState[22];
        digitalWrite(Relay[22], RelayState[22]);
        Serial.println("Relay 22 Triggered");
      }

      if (CMD == "x17h") {
        RelayState[23] = !RelayState[23];
        digitalWrite(Relay[23], RelayState[23]);
      }

      if (CMD == "x18h") {
        RelayState[24] = !RelayState[24];
        digitalWrite(Relay[24], RelayState[24]);
      }

      if (CMD == "x19h") {
        RelayState[25] = !RelayState[25];
        digitalWrite(Relay[25], RelayState[25]);
      }

      if (CMD == "x1Ah") {
        RelayState[26] = !RelayState[26];
        digitalWrite(Relay[26], RelayState[26]);
      }

      if (CMD == "x1Bh") {
        RelayState[27] = !RelayState[27];
        digitalWrite(Relay[27], RelayState[27]);
      }

      if (CMD == "x1Ch") {
        RelayState[28] = !RelayState[28];
        digitalWrite(Relay[28], RelayState[28]);
      }

      if (CMD == "x1Dh") {
        RelayState[29] = !RelayState[29];
        digitalWrite(Relay[29], RelayState[29]);
      }

      if (CMD == "x1Eh") {
        RelayState[30] = !RelayState[30];
        digitalWrite(Relay[30], RelayState[30]);
      }

      if (CMD == "x1Fh") {
        RelayState[31] = !RelayState[31];
        digitalWrite(Relay[31], RelayState[31]);
      }

      if (CMD == "x20h") {
        RelayState[32] = !RelayState[32];
        digitalWrite(Relay[32], RelayState[32]);
      }

      if (CMD == "x21h") {
        RelayState[33] = !RelayState[33];
        digitalWrite(Relay[33], RelayState[33]);
      }

      if (CMD == "x22h") {
        RelayState[34] = !RelayState[34];
        digitalWrite(Relay[34], RelayState[34]);
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

    Serial.print(":L1:" + LvlSenseVal1);
    Serial.print(":L2:" + LvlSenseVal2);
    Serial.print(":L3:" + LvlSenseVal3);
    Serial.print(":L4:" + LvlSenseVal4);
    Serial.print(":L5:" + LvlSenseVal5);
    Serial.print(":B1:" + BattSenseVal1);
    Serial.print(":B2:" + BattSenseVal2);
    Serial.print(":O1:" + OilSenseVal1);
    Serial.print(":O2:" + OilSenseVal2);
    Serial.print(":T1:" + TempSenseVal1);
    Serial.print(":T2:" + TempSenseVal2);
    Serial.print(":RPM1:" + RPMSenseVal1);
    Serial.print(":RPM2:" + RPMSenseVal2);
    Serial.print(":CMD:" + CMD);
    
    CMD = "";
  }
}
