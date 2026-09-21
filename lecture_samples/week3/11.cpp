#include <iostream>

using namespace std;

int main(){
    int x;

    cin >> x;

    int k;

    cin >> k;

    int l = (x << k);
    int r = (x >> k);

    cout << l << endl << r;

    return 0;
}
