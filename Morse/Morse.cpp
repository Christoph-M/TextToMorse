// Morse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <Windows.h>
#include <vector>

#pragma comment(lib, "winmm.lib")

#include "Codes.h"
#include "MorseCode.h"


using namespace std;


int GetCode(char);
void PlayCode(vector<int>&);


int main()
{
	char text[100];
	
	puts("Enter message: ");
	cin.getline(text, sizeof(text));


	for (int i = 0; text[i] != '\0'; ++i) {
		int code = GetCode(text[i]);

		if (code >= 0) {
			printf("Playing: %c\n", text[i]);
			PlayCode(morseCodes[code].code_);
			Sleep(BCHAR);
		}
	}

	
	puts("Presse ENTER to exit.");
	cin.getline(text, sizeof(text));

    return 0;
}


int GetCode(char letter) {
	if (letter < '[' && letter > '@') letter += ' ';

	for (int i = 0; i < CODENUM; ++i) {
		if (letter == morseCodes[i].letter_) return i;
	}

	printf("ERROR: Unknown character \"%c\"\n", letter);
		
	return -1;
}

void PlayCode(vector<int>& code) {
	for (int i = 0; i < code.size(); ++i) {
		PlaySound("KeyboardCow.wav", NULL, SND_FILENAME | SND_ASYNC);
		printf("%s ", (code[i] == SHORT) ? "." : "-");
		Sleep(code[i]);
		PlaySound(NULL, NULL, NULL);
		Sleep(BCODE);
	}

	puts("\n");
}