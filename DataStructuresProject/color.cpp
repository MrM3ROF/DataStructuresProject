#include "global.h"
HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);

void printColored(string text, int p) {

	SetConsoleTextAttribute(	// change color to p
		console_color, p);

	cout << text<<endl;

	SetConsoleTextAttribute(	// change it back to white
		console_color, 7);
}

