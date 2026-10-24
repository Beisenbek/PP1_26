#include <iostream>

using namespace std;

int main(){

    string text = "hello world!";

    string pattern;
    cin >> pattern;

    cout << text.find(pattern);


    return 0;
}