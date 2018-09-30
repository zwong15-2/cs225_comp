/**
 * @file quackfun.cpp
 * This is where you will implement the required functions for the
 *  stacks and queues portion of the lab.
 */
#include <iostream>
#include <string>
using namespace std;

namespace QuackFun {

/**
 * Sums items in a stack.
 * @param s A stack holding values to sum.
 * @return The sum of all the elements in the stack, leaving the original
 *  stack in the same state (unchanged).
 *
 * @note You may modify the stack as long as you restore it to its original
 *  values.
 * @note You may use only two local variables of type T in your function.
 *  Note that this function is templatized on the stack's type, so stacks of
 *  objects overloading the + operator can be summed.
 * @note We are using the Standard Template Library (STL) stack in this
 *  problem. Its pop function works a bit differently from the stack we
 *  built. Try searching for "stl stack" to learn how to use it.
 * @hint Think recursively!
 */
template <typename T>
T sum(stack<T>& s)
{

    // Your code here
    T top_element = s.top();
    s.pop();
	
	if(s.empty()){
	s.push(top_element);
	return top_element;
	}

	else{
	T previous = sum(s);
	s.push(top_element);
	return(previous + top_element);
	}    
    
  
}

/**
 * Checks whether the given string (stored in a queue) has balanced brackets. 
 * A string will consist of 
 * square bracket characters, [, ], and other characters. This function will return
 * true if and only if the square bracket characters in the given
 * string are balanced. For this to be true,
 * all brackets must be matched up correctly, with no extra, hanging, or unmatched
 * brackets. For example, the string "[hello][]" is balanced, "[[][[]a]]" is balanced,
 * "[]]" is unbalanced, "][" is unbalanced, and "))))[cs225]" is balanced.
 *
 * For this function, you may only create a single local variable of type stack<char>!
 * No other stack or queue local objects may be declared. Note that you may still
 * declare and use other local variables of primitive types.
 *
 * @param input The queue representation of a string to check for balanced brackets in
 * @return Whether the input string had balanced brackets
 */
bool isBalanced(queue<char> input)
{

    // @TODO: Make less optimistic
    
	stack<char> bracket_holder;
	int tracker = input.size();
	char checker;
	char holder;
	char left('[');
	char right(']');
		
 
	for(int i = 0; i < tracker; i++){
		holder = input.front();		 
		if(holder == left ){
			bracket_holder.push(holder);
		}
		if(holder == right){
			if(bracket_holder.size() == 0){
				return false;
			}
			else{
				bracket_holder.pop();
			}
		}
		input.pop();
		
	}

	if(bracket_holder.size() == 0){		
		return true;
	}

	return false; 
}

/**
 * Reverses even sized blocks of items in the queue. Blocks start at size
 * one and increase for each subsequent block.
 * @param q A queue of items to be scrambled
 *
 * @note Any "leftover" numbers should be handled as if their block was
 *  complete.
 * @note We are using the Standard Template Library (STL) queue in this
 *  problem. Its pop function works a bit differently from the stack we
 *  built. Try searching for "stl stack" to learn how to use it.
 * @hint You'll want to make a local stack variable.
 */
template <typename T>
void scramble(queue<T>& q)
{
    stack<T> s;
    // optional: queue<T> q2;

    // Your code here
    int queue_number = 1;
	int size = int(q.size());
	int tracker = 0;
	int temp;
	int temp2;

	while(tracker < size){

		if(queue_number % 2 == 1){
			temp = queue_number;
			if(temp > size-tracker){
				temp = size - tracker;
			}
		for(int i = 0; i < temp; i++){
			q.push(q.front());
			q.pop();
		}
		tracker += temp;
		queue_number++;
		}

		else{
		temp2 = queue_number;
		if(temp2 > size-tracker){
			temp2 = size-tracker;
		}
		for(int i = 0; i < temp2; i++){
			s.push(q.front());
			q.pop();
			}
		for(int j = 0; j < temp2; j++){
			q.push(s.top());
			s.pop();
		}
		tracker += temp2;
		queue_number++;
		}
	}
}

/**
 * @return true if the parameter stack and queue contain only elements of
 *  exactly the same values in exactly the same order; false, otherwise.
 *
 * @note You may assume the stack and queue contain the same number of items!
 * @note The back of the queue corresponds to the top of the stack!
 * @note There are restrictions for writing this function.
 * - Your function may not use any loops
 * - In your function you may only declare ONE local boolean variable to use in
 *   your return statement, and you may only declare TWO local variables of
 *   parametrized type T to use however you wish.
 * - No other local variables can be used.
 * - After execution of verifySame, the stack and queue must be unchanged. Be
 *   sure to comment your code VERY well.
 */
template <typename T>
bool verifySame(stack<T>& s, queue<T>& q)
{
    bool retval = true; // optional
      
    // T temp2; // rename :)

    // Your code here
	if(s.empty()){   //used in case stack goes to base case
		return true;
	}

	T temp1 = s.top(); //stack contents will be stored in temporary holder during recursive step
	s.pop(); //releases value from stack
	retval = verifySame(s,q); //recurisve step, stack will be empty and queue will not be changed
	retval = (retval && temp1==q.front()); //checks stack and queue values

	q.push(q.front()); //pushing front queue value in back
	q.pop(); //releasing queue value
	s.push(temp1); //pushing previous stack value
	
    return retval;
}

}
