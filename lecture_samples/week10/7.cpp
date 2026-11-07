#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    

    cout << v.size() << endl;
    vector<int> :: reverse_iterator it1;

    for(it1 = v.rbegin(); it1 != v.rend(); it1++){
        cout << *it1 << endl;
    }

    return 0;
}