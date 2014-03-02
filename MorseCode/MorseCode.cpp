// MorseCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void textToMorse(char *);
void morseToText(char *);
bool checkMorse(char *);


int _tmain(int argc, _TCHAR* argv[])
{
	char text[1000];

	cout << "*** Please enter either:               ***" << endl;
	cout << "*** Morse Code to translate to English ***" << endl;
	cout << "*** English to translate to Morse Code ***" << endl;
	cout << endl << "? ";
	cin.getline(text, 1000, '\n');

	bool morse = checkMorse(text);

	
	if(morse)
		morseToText(text);
	else
		textToMorse(text);
		

	//cout << text << endl;

	return 0;
}

bool checkMorse(char *s)
{
	for(char j = 'a'; j <= 'z'; j++)
	{
		if(s[0] == j){return false;}
	}
	for(char j = 'A'; j <= 'Z'; j++)
	{
		if(s[0] == j){return false;}
	}
	for(int i = '0'; i <= '9'; i++)
	{
		if(s[0] == i){return false;}
	}

	return true;
}

void textToMorse(char *s)
{
	char temp[1000];
	strcpy_s(temp, 1000, s);
	_strupr_s(temp, 1000);

	cout << endl;

	for(int i = 0; i < strlen(temp); i++)
	{
		if(temp[i] == ' '){cout << "   ";}
		else if(temp[i] == 'A'){cout << ".- ";}
		else if(temp[i] == 'B'){cout << "-... ";}
		else if(temp[i] == 'C'){cout << "-.-. ";}
		else if(temp[i] == 'D'){cout << "-.. ";}
		else if(temp[i] == 'E'){cout << ". ";}
		else if(temp[i] == 'F'){cout << "..-. ";}
		else if(temp[i] == 'G'){cout << "--. ";}
		else if(temp[i] == 'H'){cout << ".... ";}
		else if(temp[i] == 'I'){cout << ".. ";}
		else if(temp[i] == 'J'){cout << ".--- ";}
		else if(temp[i] == 'K'){cout << "-.- ";}
		else if(temp[i] == 'L'){cout << ".-.. ";}
		else if(temp[i] == 'M'){cout << "-- ";}
		else if(temp[i] == 'N'){cout << "-. ";}
		else if(temp[i] == 'O'){cout << "--- ";}
		else if(temp[i] == 'P'){cout << ".--. ";}
		else if(temp[i] == 'Q'){cout << "--.- ";}
		else if(temp[i] == 'R'){cout << ".-. ";}
		else if(temp[i] == 'S'){cout << "... ";}
		else if(temp[i] == 'T'){cout << "- ";}
		else if(temp[i] == 'U'){cout << "..- ";}
		else if(temp[i] == 'V'){cout << "...- ";}
		else if(temp[i] == 'W'){cout << ".-- ";}
		else if(temp[i] == 'X'){cout << "-..- ";}
		else if(temp[i] == 'Y'){cout << "-.-- ";}
		else if(temp[i] == 'Z'){cout << "--.. ";}
		else if(temp[i] == '1'){cout << ".---- ";}
		else if(temp[i] == '2'){cout << "..--- ";}
		else if(temp[i] == '3'){cout << "...-- ";}
		else if(temp[i] == '4'){cout << "....- ";}
		else if(temp[i] == '5'){cout << "..... ";}
		else if(temp[i] == '6'){cout << "-.... ";}
		else if(temp[i] == '7'){cout << "--... ";}
		else if(temp[i] == '8'){cout << "---.. ";}
		else if(temp[i] == '9'){cout << "----. ";}
		else if(temp[i] == '0'){cout << "----- ";}
		else{cout << "oops...." << endl;}
	}

	cout << endl;
}

void morseToText(char *s)
{
	char *tokenPtr;
	char temp[1000];
	char temp2[1000];
	strcpy_s(temp, 1000, s);
	strcpy_s(temp2, 1000, s);

	tokenPtr = strtok_s(temp, "  ", &s);

	int counter = 0;
	while(tokenPtr != NULL)
	{
		if(!strcmp(tokenPtr, ".-")){cout << "a";}
		else if(!strcmp(tokenPtr,  "-...")){cout << "b";}
		else if(!strcmp(tokenPtr ,  "-.-.")){cout << "c";}
		else if(!strcmp(tokenPtr ,  "-..")){cout << "d";}
		else if(!strcmp(tokenPtr ,  ".")){cout << "e";}
		else if(!strcmp(tokenPtr ,  "..-.")){cout << "f";}
		else if(!strcmp(tokenPtr ,  "--.")){cout << "g";}
		else if(!strcmp(tokenPtr ,  "....")){cout << "h";}
		else if(!strcmp(tokenPtr ,  "..")){cout << "i";}
		else if(!strcmp(tokenPtr ,  ".---")){cout << "j";}
		else if(!strcmp(tokenPtr ,  "-.-")){cout << "k";}
		else if(!strcmp(tokenPtr ,  ".-..")){cout << "l";}
		else if(!strcmp(tokenPtr ,  "--")){cout << "m";}
		else if(!strcmp(tokenPtr ,  "-.")){cout << "n";}
		else if(!strcmp(tokenPtr ,  "---")){cout << "o";}
		else if(!strcmp(tokenPtr ,  ".--.")){cout << "p";}
		else if(!strcmp(tokenPtr ,  "--.-")){cout << "q";}
		else if(!strcmp(tokenPtr ,  ".-.")){cout << "r";}
		else if(!strcmp(tokenPtr ,  "...")){cout << "s";}
		else if(!strcmp(tokenPtr, "-")){cout << "t";}
		else if(!strcmp(tokenPtr ,  "..-")){cout << "u";}
		else if(!strcmp(tokenPtr ,  "...-")){cout << "v";}
		else if(!strcmp(tokenPtr ,  ".--")){cout << "w";}
		else if(!strcmp(tokenPtr ,  "-..-")){cout << "x";}
		else if(!strcmp(tokenPtr ,  "-.--")){cout << "y";}
		else if(!strcmp(tokenPtr ,  "--..")){cout << "z";}
		else if(!strcmp(tokenPtr ,  ".----")){cout << "1";}
		else if(!strcmp(tokenPtr ,  "..---")){cout << "2";}
		else if(!strcmp(tokenPtr ,  "...--")){cout << "3";}
		else if(!strcmp(tokenPtr ,  "....-")){cout << "4";}
		else if(!strcmp(tokenPtr ,  ".....")){cout << "5";}
		else if(!strcmp(tokenPtr ,  "-....")){cout << "6";}
		else if(!strcmp(tokenPtr ,  "--...")){cout << "7";}
		else if(!strcmp(tokenPtr ,  "---..")){cout << "8";}
		else if(!strcmp(tokenPtr ,  "----.")){cout << "9";}
		else if(!strcmp(tokenPtr ,  "-----")){cout << "0";}
		else{cout << "oops2...." << endl;}

		//cout << tokenPtr << endl;
		counter += strlen(tokenPtr);
		
		if(temp2[counter] == ' ' && temp2[counter+1] == ' ' & temp2[counter+2] == ' '){counter += 2; cout << " ";}

		counter++;

		 /* && temp[counter+2] == ' ' && temp[i+2] == ' '*/
		//cout << s[counter];

		tokenPtr = strtok_s(NULL, " ", &s);
		
	}

	cout << endl;
}

