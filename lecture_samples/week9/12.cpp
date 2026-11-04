#include <iostream>

using namespace std;

void f2(int * a){
    *a = *a * 2;
    cout << *a << endl;
}

int main(){

    int a = 5;

    f2(&a);

    cout << a;

    return 0;
}
