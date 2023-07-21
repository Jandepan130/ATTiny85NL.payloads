#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.print("https://geekprank.com/fake-dos/");
DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(750);
DigiKeyboard.sendKeyStroke(KEY_F11);
for(;;)
  {
  }
}
