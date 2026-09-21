#include <iostream>

using namespace std;

int main(){

    string x;
    cin >> x;

    int sum = 0;

    for(int i = 0; i < x.size(); ++i){
        int d = int(x[i]) - int('0');
        sum += d;
    }


    cout << sum;
    return 0;
}
