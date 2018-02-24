
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  for (int i = 36; i < 48; i++) {
    usbMIDI.sendNoteOn(i, 127, 1); //send note on (note, velocity, channel 1-16)
    delay(300);
    usbMIDI.sendNoteOn(i, 0, 1); //send note off
    delay(300);
  }

}
