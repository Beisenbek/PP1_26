#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

     stringstream ss("123 123 test");

     string c;
     int a, b;

     ss >> a >> b >> c;

     cout << sqrt(a) << endl;
     cout << b << endl;
     cout << c << endl;


    return 0;
}