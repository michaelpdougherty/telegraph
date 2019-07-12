#include <ctype.h>
#include <Arduino.h>
#include "telegraph.h"

const char* LETTERS[] = {
	".-", "-...", "-.-.", "-..", ".", 		// A-E
	"..-", "--.", "....", "..", ".---", 	// F-J
	"-.-", ".-..", "--", "-.", "---", 		// K-O
	".--.", "--.-", ".-.", "...", "-", 		// P-T
	"..-", "...-", ".--", "-..-", "-.--", 	// U-Y
	"--.."									// Z
};

const char* DIGITS[] {
	"-----", ".----", "..---", "...--", // 0-3
	"....-", ".....", "-....", "--...", // 4-7
	"---..", "----." 					// 8-9
};

Telegraph::Telegraph(const int output_pin, const int dit_length) {
  _output_pin = output_pin;
  _dit_length = dit_length;
  _dah_length = dit_length * 3;
  pinMode(_output_pin, OUTPUT);
}

void Telegraph::output_code(const char* code) {
  const unsigned int code_length = strlen(
}

