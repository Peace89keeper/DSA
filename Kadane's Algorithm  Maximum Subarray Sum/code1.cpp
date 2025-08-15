#include <iostream>
#include <climits>
using namespace std;

int main(){
    //Kadane's Algorithm  Maximum Subarray Sum
    int arr[] = {1,2,-3,-2,5,-8,9,4,5,5};
    int n = 10;
    int maxi = INT_MIN;
    for(int st = 0 ; st < n ; st++){
        int current = 0;
        for(int end = st; end < n ; end++){
            current += arr[end];
            maxi = max(current , maxi);
            if(current < 0){
                current = 0;
            }


        }

    
    }
    cout << maxi;
}
