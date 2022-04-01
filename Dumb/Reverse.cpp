#include "Reverse.h"
#include <string>
#include <iostream>

Reverse::Reverse()
{}

int Reverse::reverseDigit(int num)
{
	int remain;
	int n = num;
		
	if (n != 0)
	{
		remain = n% 10;
		

		revers_Digit = revers_Digit * 10 + remain;
		n /= 10; 


		

	}
	else 
	{
		return revers_Digit; 
	}
	return reverseDigit(n); 
}



std::string Reverse::reverseString (std::string stri)
{
	std::string word = stri; 
	
	char store; 

	if ( word.length() != 0)
	{
		store = word.back(); 
		Reverse_Word = Reverse_Word + store; 
		word.pop_back();
	}
	else 
	{
		return Reverse_Word;
	}

		return reverseString(word);
}