#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char c;
    cin >> c;

    cout << hex << uppercase << setw(2) << setfill('0') << (int)(unsigned char)c << endl; 

    printf("%02X\n",(unsigned char)c);

    return 0;
}
