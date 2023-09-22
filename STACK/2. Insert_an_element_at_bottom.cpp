// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=0


#include <bits/stdc++.h> 

void helper(stack<int>& myStack, int x) {

    // BASE CASE
    if(myStack.empty()) {
        myStack.push(x);
        return;
    }

    // RECURSIVE CALL
    int num = myStack.top();
    myStack.pop();
    helper(myStack, x);

    // backtrack
    myStack.push(num);
}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.

    helper(myStack, x);

    return myStack;
}
