#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int divider_count(int x){
    int res = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            res++;
        }
    }
    return res;
}

bool f(int l, int r){
    int ldc = divider_count(l);
    int rdc = divider_count(r);
    if(ldc > rdc) return true;
    return false;
}

int main(){

    vector<int> v;
    v.push_back(1);//1
    v.push_back(22);//4
    v.push_back(3);//2
    v.push_back(4);//3
    //22 4 3 1
    //1 3 4 22

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << endl;
    }

    return 0;
}