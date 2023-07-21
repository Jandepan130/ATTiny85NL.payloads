#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(800);
DigiKeyboard.print("notepad");
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(800);
DigiKeyboard.print("stop nooit zomaar iets in je pc/laptop");
DigiKeyboard.delay(2500);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(800);
DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
for(;;)
  {
  }
}
