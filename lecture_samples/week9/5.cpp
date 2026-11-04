#include <iostream>
#include <sstream>

using namespace std;

int apb(int a, int b){
    return a + b;
}

int main(){

    int a, b;
    cin >> a >> b;

    int c = apb(a,b);

    cout << c;

    return 0;
}