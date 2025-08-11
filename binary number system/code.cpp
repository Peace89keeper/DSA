#include <iostream>
using namespace std;
int main()
{ // decimal to binary
  //  int num = 10;
  //  int pow = 1;
  //  int ans = 0;

    // while (num / 2 > 0)
    // {
    //     int rem = num / 2;
    //     int bin = num % 2;

    //     ans = ans + (rem * pow);
    //     pow = pow * 10;
    // }

    // cout << ans << endl;

    // binary to deciimal
    int binNum = 101;
    int ans = 0;
    int pow = 1;
    while( binNum > 0){
        int rem = binNum%10;
        ans += rem * pow;
        pow = pow * 2;
        binNum = binNum/10;
        

    }
    cout << ans;
    

    return 0;
}
