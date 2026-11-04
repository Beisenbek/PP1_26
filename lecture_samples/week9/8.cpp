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
    print(sum(a, b));
}

int main(){

    calculate();

    return 0;
}