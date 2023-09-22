// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875

/*


*/


void insertAtBottom(int x, stack<int> &stack)

{

  if(stack.empty()) {
      stack.push(x);
      return;
  }

  int y = stack.top();

  stack.pop();

  insertAtBottom(x, stack);

  stack.push(y);
}

void reverseStack(stack<int> &stack) {

  if (stack.empty() || stack.size() == 1)
    return;

  int temp = stack.top();

  stack.pop();

  reverseStack(stack);

  insertAtBottom(temp, stack);
}