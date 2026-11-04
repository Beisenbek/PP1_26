#include <iostream>
#include <sstream>

using namespace std;

int sum(int *a, int *b);
void print(int a);
void calculate();

void print(int a){
    cout << a << endl;
}

void read(int * a, int * b){
    cin >> *a >> *b;
}

void calculate(){
    int a, b;
    read(&a, &b);
    print(sum(&a, &b));
}


int main(){

    calculate();

    return 0;
}



int sum(int *a, int *b){
    return *a + *b;
}