#include <iostream>

using namespace std;

int main(){

    int a;
    int b;

    cin >> a >> b;

    cout << (a ^ b);

    //bitwise xor

    return 0;
}

/*

1) authentification - identify
2) get additional info: his email, phone, roles [dean, teacher, student]
3) authorization: mapping from roles to access

dean <--- 1
teacher <--- 0
student <--- 1

read  []
write []
bring []
..
..
..
..


=========
r | w | b | access code
=========
0 | 0 | 0 | 0
0 | 0 | 1 | 1
0 | 1 | 0 | 2
0 | 1 | 1 | 3
1 | 0 | 0 | 4
1 | 0 | 1 | 5
1 | 1 | 0 | 6
1 | 1 | 1 | 7


actions

read  - 100 | 4
write - 010 | 2
bring - 001 | 1

access
dean - 7
student - 4
teacher - 0
*/





//use cases

/*

subject [dean, student, teacher]
action [read, write, bring]
object [usb card]


7 ----> 4 === ????

7 & 4 == 1

subject & action = ALLOW | DENY

AND &
    111
    100
    ----
    100
*/