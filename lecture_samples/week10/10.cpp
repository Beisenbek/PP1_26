#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    

    cout << s.size() << endl;
    set<int> :: iterator it1;

    for(it1 = s.begin(); it1 != s.end(); it1++){
        cout << *it1 << " ";
    }

    return 0;
}