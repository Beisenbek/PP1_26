#include <iostream>

using namespace std;

int main(){

    string fname1;
    string fname2;
    cin >> fname1 >> fname2;

    freopen(fname1.c_str(),"r",stdin);
    freopen(fname2.c_str(),"w",stdout);
    
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0; i < n; ++i){
        if(x == a[i]){
             found = true;
             break;
        }
    }

    if(found){
        cout << "found!";
    }else{
        cout << "not found!";
    }

    return 0;
}