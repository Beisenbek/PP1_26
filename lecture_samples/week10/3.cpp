#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    

    cout << v.size() << endl;
    vector<int> :: iterator it1;

    for(it1 = v.begin(); it1 != v.end(); it1++){
        cout << *it1 << endl;
    }

    return 0;
}