#include <iostream>
#include "Reverse.h"

int main()
{
	Reverse p1 = Reverse(); 
	std::string input; 
	std::cout<<"enter num: " <<std::endl; 
	std::cin>> input; 
	std::cout << p1.reverseString(input) <<std::endl;

	return 0; 

}