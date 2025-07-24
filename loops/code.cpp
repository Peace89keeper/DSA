#include <iostream>
using namespace std;

int main()
{
    // conditional statement
    // 1.if-else

    // if (true)
    // {
    //     cout << "Hello World" << endl;
    // }
    // else
    // {
    //     cout << "Goodbye World" << endl;
    // }
    // // 2. else if

    // if (false)
    // {
    //     cout << "Hello World" << endl;
    // }
    // else if (true)
    // {
    //     cout << "Goodbye World" << endl;
    // }
    // else
    // {
    //     cout << "Hello Again World" << endl;
    // }
    // // Q. Find the lowercase and uppercase.
    // string alf;
    // cout << "Enter an alphabet: ";
    // cin >> alf;
    // if (islower(alf[0]))
    // {
    //     cout << "This alphabet is in " << "Lowercase" << endl;
    // }
    // else
    // {
    //     cout << "This alphabet is in " << "Uppercase" << endl;
    // }

    // // 3. Ternary operator
    // int a = 5, b = 10;
    // a > b ? cout << "True" : cout << "False" << endl;

    // // loop
    // //1.for loop
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Hello World " << i << endl;
    // }
    // cout << endl;

    // // 2. while loop
    // // int i= 0;
    // // while(i<=10){
    // //     i++;
    // //     cout << "Hello World " << i << endl;
        
    // // }

    // // Q. Print the no. from 1 to n.
    // int n;
    // cout << "Enter the nth no. "<< endl;
    // cin >> n;
    // // for(int i=1;i<=n;i++){
    // //     cout << i << endl;
    // // }
    // // cout <<  endl;
    // int sum = 0;

    // for(int j = 1; j <= n; j++){
    //     sum += j;
    //     cout << sum << endl;
    // }

    // // 3. Print odd n no.s
    // int odd = 1;
    // cout << "Enter the nth no." ;
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 != 0){
    //         cout << i << endl;
    //     }
    // }

    // 4. do while loop
    // int prime;
    // int i = 2; // Start from 2 since 1 is not a prime number

    // cout << "Enter a number to check if it's prime: " << endl;
    // cin >> prime;

    // bool isPrime = true; // Assume the number is prime initially

    // do {
    //     if (prime % i == 0) {
    //         isPrime = false; // If divisible, it's not prime
    //         cout << i << " is a factor of " << prime << ", so " << prime << " is not a prime number." << endl;
    //         break; // No need to continue checking
    //     }
    //     i++;
    // } while (i <= prime / 2); // Check up to half of the number

    // if (isPrime) {
    //     cout << prime << " is a prime number." << endl;
    // }

    //5. Nested loop
    int star ;
    cout << "Enter the number of rows for the star pattern: ";
    cin >> star;
    for(int i = 1; i <= star; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
    }

    return 0;
}