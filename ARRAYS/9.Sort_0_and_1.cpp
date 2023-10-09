// https://www.codingninjas.com/studio/problems/sort-0-1_624379


void sortZeroesAndOne(int input[], int size)
{
    //Write your code here
    int cnt_0 = 0;
    int cnt_1 = 1;

    for(int i=0;i<size;i++) {
        if(input[i] == 0) {
            cnt_0++;
        }
        else {
            cnt_1++;
        }
    }

    int i = 0;
    while(cnt_0 > 0) {
        input[i] = 0;
        i++;
        cnt_0--;
    }

    while(cnt_1 > 0) {
        input[i] = 1;
        i++;
        cnt_1--;
    }

}

// Two Pointer Approach

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int start = 0, end = n-1;
        
        while(start < end) {
            if(arr[start] == 0) {
                start++;
            }
            else if(arr[end] == 1) {
                end--;
            }
            else {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
    }
};