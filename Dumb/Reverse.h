#ifndef REVERSE_H 
#define REVERSE_H



#include <string>

class Reverse 
{
private: 
	int revers_Digit = 0;
	std::string Reverse_Word;
public: 
	Reverse();
	int reverseDigit(int num); 
	std::string reverseString (std::string stri);
};
#endif