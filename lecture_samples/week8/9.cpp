#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

     stringstream ss;

     ss << "123 ";
     ss << "169 ";
     ss << "test!";

     string s = ss.str();


     cout << s;



    return 0;
}