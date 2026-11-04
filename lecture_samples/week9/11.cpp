#include <iostream>

using namespace std;

void f(int a){
    a = a * 2;
    cout << "within f: "<< a << endl;
}


int main(){

    int a = 5;

    f(a);

    cout << "within main: " << a << endl;

    return 0;
}
