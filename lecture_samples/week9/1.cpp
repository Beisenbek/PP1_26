#include <iostream>

using namespace std;

int main(){

    string str;
    getline(cin, str);

    str += ' ';

    size_t left = 0;
    int length = 0;
    int sum = 0;

    for(size_t i = 0; i < str.size(); ++i){
        if(str[i] == ' '){
            string temp = str.substr(left, length);
            int x = stoi(temp);
            sum += x;
            left = i + 1;
            length = 1;
        }else{
            length++;
        }
    }

    cout << sum;

    return 0;
}