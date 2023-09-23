// https://www.codingninjas.com/studio/problems/sort-a-stack_985275

/*



*/

#include <bits/stdc++.h> 

void sortInsert(stack<int> &stack, int num) {

	if(stack.empty() || !stack.empty() && stack.top() < num){
		stack.push(num);
		return;
	}

	int topElement = stack.top();
	stack.pop();
	sortInsert(stack, num);
	stack.push(topElement);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	// base case
	if(stack.empty()) {
		return;
	}

	int num = stack.top();
	stack.pop();
	// recursion call
	sortStack(stack);
	sortInsert(stack, num);
}
