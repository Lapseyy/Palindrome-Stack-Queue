

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

	
	for(int i = 0; i < s.size(); i++){		//forloop initialized in i and then check that i less that the size 
		Que.enqueue(s[i]);  //add in queue  
		Stc.push(s[i]);   //add in stack
	}
	while( !Stc.empty() && !Que.empty()){
		if (Stc.top() != Que.front){
			return false;
		}
		Stc.pop();
		Que.dequeue();

	}
	return true;
	}
}

    








