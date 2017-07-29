// Sat Jul 29 18:14:02 UTC 2017
// 4735-b0b-01-

#include <Arduino.h>
#include "../../yaffa.h"
#include "../../Dictionary.h"
// #include "../../Error_Codes.h"

/*******************************************************************************/
/*******************************************************************************/
const char help_str[] = "help";
void _help(void) {
  Serial.println();
  Serial.print("    type 'words' instead of 'help'.\r\n");
}

const char who_str[] = "who";
void _who(void) {
  // hex 1d00 dup 40 dump
  // _hex();
  dStack_push(0x1d00);
  _dupe();
  dStack_push(0x40);
  _dump();
}
