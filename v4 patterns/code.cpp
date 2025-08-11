#include <iostream>
using namespace std;
int main()
{
    // Q.1. Square pattern
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int m = n;
        for (int j = 1; j <= m; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    //(1.2) In char format
    cout << char(65) << endl; // ASCII value of 'A' is 65

    int n1;

    cout << "Enter a no. of char : " << endl;
    cin >> n1;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n1; j++)
        {
            cout << char(64 + j); // ASCII value of 'A' is 65, so we start from 64
        }
        cout << endl;
    }

    //(1.3)123,456,789 format
    int num = 1;
    int n2;
    cout << "Enter a no." << endl;
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    // Q.2 Triangle pattern
    int n3;
    cout << "Enter the no." << endl;
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // 2.2 In numerical form

    int n4;

    cout << "Enter the fucking no." << endl;
    cin >> n4;
    for (int i = 1; i <= n4; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
        // Output 0f 4
        // 1
        // 22
        // 333
        // 4444
    }
    // 2.4 backward triangle
    int n5;

    cout << "Enter the fucking no." << endl;
    cin >> n5;
    for (int i = 1; i <= n5; i++)
    {

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    // Output of 4
    // 1
    // 21
    // 321
    // 4321

    // 2.5 Floyd 's triangle pattern

    int n6;
    int num3 = 1;
    cout << "Enter the fucking no." << endl;
    cin >> n6;
    for (int i = 1; i <= n6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num3;
            num3++;
        }
        cout << endl;
    }

    // 2.6 inverted triangle pattern
    int n7;
    cout << "Enter the fucking no." << endl;
    cin >> n7;

    for (int i = 1; i <= n7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= n - i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    // output of 4
    // 1111
    //  222
    //   33
    //    4

    // Q.2.7 Pyramid
    int n8;
    cout << "Enter the  no." << endl;
    cin >> n8;
    for (int i = 0; i < n8; i++)
    {
        // spaces (n -i -1)
        for (int j = 0; j <= n8 - i - 1; j++)
        {

            cout << " ";
        }

        // num of the first triangle
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // num of the second triangle
        for (int j = i - 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
        // output of 4
        //    1
        //   121
        //  12321
        // 1234321
    }

    // Diamond
    int n9;
    cout << "Enter the  no." << endl;
    cin >> n9;
    for (int i = 0; i < n9; i++)
    {
        // space1
        for (int j = 0; j < n9 - i - 1; j++)
        {
            cout << " ";
        }
        // Star1

        cout << "*";

        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n9 - 1 ; i++)
    {
        // space1

        if (i != 0)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
        }
        cout << "*";
        
        if( i != n-2){
            for (int j = 0; j < 2*(n9-i) -n9  ;j++ ){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}