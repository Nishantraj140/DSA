// https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0

/*


*/

#include <bits/stdc++.h> 


void helper(stack<int>&inputStack, int cnt, int n) {

   // base case

   if(cnt == n/2) {
      inputStack.pop();
      return;
   }


   int num = inputStack.top();
   inputStack.pop();

   helper(inputStack,cnt+1,n);

   inputStack.push(num);

}



void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here

   int cnt = 0;
   helper(inputStack,cnt,N);
   
}