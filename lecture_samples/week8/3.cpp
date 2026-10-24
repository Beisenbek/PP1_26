#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string test;
    cin >> test;

    int n = test.size() - 1;
    int s = 0;

    for(int i = 0; i < test.size(); ++i){
        int c = int(test[i]) - 48;
        int d = pow(10, n - i);
        //cout << c << " " << i <<  " " << d <<  endl;
        s = s + c * d;
     }

     cout << sqrt(s) << endl;
     

    return 0;
}
