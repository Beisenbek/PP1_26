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
    
    vector<int> :: reverse_iterator it1 = v.rbegin();

    cout << *it1;
    return 0;
}