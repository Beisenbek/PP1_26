#include <iostream>

using namespace std;

int main(){

    string x;
    
    getline(cin, x);

    
    for(int i = 0; i < x.size(); ++i){
        cout << int(x[i]) << " ";
    }

    cout << endl;

    

    return 0;
}
