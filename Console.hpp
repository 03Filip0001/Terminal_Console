#ifndef CONSOLE_HPP_INCLUDED
#define CONSOLE_HPP_INCLUDED

#include <iostream>

class Console{

	public:

		Console();
		~Console();

		bool setTitle(char* const);
		bool setWidth(unsigned);
		bool setWidth(unsigned* const);
		bool setHeight(unsigned);
		bool setHeight(unsigned* const);

		char* getTitle();
		unsigned getWidth();
		unsigned getHeight();

		bool clear();
		bool setXY(unsigned, unsigned);
		bool setXY(unsigned* const, unsigned* const);
};

#endif
