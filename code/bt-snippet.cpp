#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  SerialBT.begin("Phantom");
}

void loop() {
  bytes_incoming = SerialBT.available();
  
  if (bytes_incoming > 0) {
    uint8_t incoming_data = SerialBT.read();
    // TODO Do stuff with incoming char here
    
    uint8_t outgoing_data;
    // TODO Do stuff with determining outgoing char here
    
    SerialBT.write(outgoing_data);
  }
}