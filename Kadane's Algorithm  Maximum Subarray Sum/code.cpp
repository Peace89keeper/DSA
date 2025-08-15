#include <iostream>
#include <climits>
using namespace std;


int main()
{
    // Subarray
    // A subarray is a continuous part of an array.

    // That means:

    // You take some consecutive elements from the original array.

    // You cannot skip elements in between — the order and continuity must be preserved.

    int arr[7] = {1, 2, 3,-4,-6,-8, 4};
    // Possible subarray
    //[1]
    //  [1, 2]
    //  [2, 3]
    //  [3, 4]
    //  [1, 2, 3]
    //  [2, 3, 4]
    //  [1, 2, 3, 4]

    // Not possible subarray
    //  [1, 3]
    //  [2, 4]

    // Total no. of subarrays of any array = {n*(n+1)}/2

    // to finding the subarrays(Brute force approach)
    int n = 7;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int curSum = 0;
        for (int end = st; end < n; end++)
        {
            curSum = curSum + arr[end];
            maxSum = max(curSum , maxSum);
            

        }
        
    }
    cout << maxSum ;
    

    return 0;
}