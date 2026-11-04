#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string str;
    stringstream ss;

    getline(cin, str);

    int sum = 0;

    ss << str;

    int x;

    while(ss >> x){
        sum += x;
    }

    cout << sum;

    return 0;
}