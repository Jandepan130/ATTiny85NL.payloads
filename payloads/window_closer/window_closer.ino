#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
DigiKeyboard.delay(1000);
  {
  }
}
