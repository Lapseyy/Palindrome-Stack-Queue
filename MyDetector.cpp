

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"
//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
	MyQueue<char> Que;
	MyStack<char> Stc;
	//add char to a linked list single)

	
	for(size_t i = 0; i < s.size(); i++){		//forloop initialized in i and then check that i less that the size 
		char c = tolower(s[i]);
		if( c >= 97 && c <= 122){						//Uppercase 65 is lower a and 90 is lower // lower case 97 to 122
			Que.enqueue(c);  //add in queue  
			Stc.push(c);   //add in stack
		}
	}
	while( !Stc.empty() || !Que.empty()){
		if (Stc.top() != Que.front()){
			return false;
		}
		Stc.pop();
		Que.dequeue();

	}
	return true;
	}
}

    








