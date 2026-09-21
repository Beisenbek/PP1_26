#include <iostream>

using namespace std;

int main(){

    string binary;
    cin >> binary;

    int n = 0;

    int s = binary.size() - 1;

    for(int i = s; i >=0; --i){
        cout << i << " " << pow(2, i) << endl;
        n = n + pow(2, i) * (int(binary[s - i]) - 48);
    }


    cout << n;
    

    return 0;
}
