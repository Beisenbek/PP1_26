#include <iostream>
#include <sstream>

using namespace std;

void print(int a, int b){
    cout << a << endl;
    cout << b << endl;
}

int main(){

    int a, b;
    cin >> a >> b;

    print(a,b);

    return 0;
}