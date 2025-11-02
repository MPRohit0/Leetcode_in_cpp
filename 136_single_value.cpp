#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {4,1,2,1,2};
    // we need a method to cancle same values among themself. and we know n^n = 0, n^0 = n, and ^ (XOR) is associative 
    int ans = 0;
    for (int i = 0; vec.size()>i;i++){
        ans ^= vec[i];
    }
    cout << ans <<endl;
    return 0;
}