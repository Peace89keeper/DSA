#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> num = {5,6,5,6,3};
    int ans = 0;
    for(int val : num){
        ans = ans^val;
        
    }
    cout << ans <<endl;
    

}