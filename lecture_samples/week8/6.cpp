#include <iostream>

using namespace std;

int main(){

    string text = "hello world!";

    string pattern;
    cin >> pattern;

   if(text.find(pattern) == npos){
        cout << "not found!";
   }else{
        cout << "found!";
   }


    return 0;
}