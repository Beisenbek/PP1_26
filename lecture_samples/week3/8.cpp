#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    string res = "";


    do{
        res = char(n % 2 + 48) + res;
        n = n / 2;
    }while(n > 0);

    cout << res;
    

    return 0;
}
