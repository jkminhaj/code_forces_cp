// link : https://codeforces.com/problemset/problem/1999/A

#include <iostream>
using namespace std ;
int main() {
    int times ;
    cin >> times ;
    
    for(int i = 0 ; i<times ; i++){
        int num ;
        cin >> num ;
        cout << (num/10) + (num%10) <<endl;
    }

    return 0;
}
