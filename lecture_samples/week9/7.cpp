#include <iostream>
#include <sstream>

using namespace std;


int sum(int a, int b){
    return a + b;
}

void print(int a){
    cout << a << endl;
}

void calculate(){
    int a, b;
    cin >> a >> b;
    int c = sum(a, b);
    print(c);
}

int main(){

    calculate();

    return 0;
}