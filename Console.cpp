#include <iostream>
#include <string.h>


#include "Console.hpp"

Console::Console(){
	using namespace std;

	clear();
	setXY(5, 10);
	cout << "Test";
}

Console::~Console(){

	//clear();

	return;
}

bool Console::clear(){

	char CLEAR_STRING[15];
	strcpy(CLEAR_STRING, "\e[2J\e[3J\e[1;1H");

	using namespace std;

	cout << CLEAR_STRING;

	return true;
};

bool Console::setXY(unsigned* const X, unsigned* const Y){
	using namespace std;

	cout << "\e[" << (*Y) << ";" << (*X) << "H";

	return true;
}

bool Console::setXY(unsigned X, unsigned Y){
	setXY(&X, &Y);
	return true;
}
