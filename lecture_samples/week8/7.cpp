#include <iostream>
#include <sstream>

using namespace std;

int main(){

     stringstream ss("123 123 test");

     string a,b,c;

     ss >> a >> b >> c;

     cout << a << endl;
     cout << b << endl;
     cout << c << endl;


    return 0;
}