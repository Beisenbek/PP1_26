#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(100);
    
    vector<int> :: iterator it1 = v.end();

    cout << v[v.size() - 1];
    return 0;
}