#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(3, 12);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;

    // vector functions
    // 1. Size

    cout << vec.size() << endl;
    // push_back

    vector<int> vecc = {};
    vecc.push_back(3);
    vecc.push_back(2);
    vecc.push_back(1);

    cout << vecc[1] << endl;

    // pop_back

    vecc.pop_back();

    for (int val : vecc)
    {
        cout << val << endl;
    }
    //front and back

    // cout << vecc.front() << endl;
    // cout << vecc.back() << endl;

    //at = provides the value of the index of the vector

    cout << vecc.at(1) << endl;

    









    return 0;
}