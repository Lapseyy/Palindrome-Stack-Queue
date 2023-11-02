
/**
 * You don't need to edit this file, although you can if you wish.
 * This source file will not be graded.
 * 
 * This is just an extra program you can use to debug your code.
 * Put whatever you want here, and use "make sandbox" to execute it.
 */

//
#include "MyDetector.hpp"


//
#include <iostream>
#include <string>

//
using std::cout, std::cin, std::endl, std::string;


//
int main()
{
	//
	cout << "Hi. Put anything here you'd like." << endl;
	string s = "never odd or even";
	CPSC131::PalindromeDetector::MyDetector d;
	cout << d.isPalindrome(s) << endl;
	return 0;
}

