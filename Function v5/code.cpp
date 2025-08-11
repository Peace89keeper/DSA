#include <iostream>
using namespace std;
// combination of a no.
int comb(int n1, int r)
{
    

    int upper = 1;
    int lower1 = 1;
    int lower2 = 1;
    
    for (int i = 1; i <= n1; i++)
    {
        upper = upper * i;
    }
    for (int i = 1 ; i <= r ; i++){
        lower1 = lower1 * i;
    }

    for (int i = 1 ; i <= (n1 - r) ; i++){
        lower2 = lower2 * i;
    }
    return upper/(lower1*lower2);

    
}
// Sum of the digits of a number
int dig_sum(int n)

{
    int digSum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        digSum = digSum + lastDigit;
    }
    return digSum;
}

int sum(int num)
{
    int total = 0;

    for (int i = 0; i <= num; i++)
    {
        total = i + total;
    }
    return total;
}

int fun(int a, int b)
{
    cout << "Love india" << endl;
    return a + b;
}
int main()
{
    cout << " val = " << fun(1, 2) << endl;
    cout << sum(10) << endl;
    cout << dig_sum(145) << endl;
    cout << comb(9,2) << endl;
    return 0;
}