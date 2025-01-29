// Problem link : https://codeforces.com/problemset/problem/236/A

#include <iostream>
using namespace std ;
int main () {
    
    string word , dis = "" ;
    cin >> word ;
    
    for(int i = 0 ; i<word.length() ; i++) {
        if( dis.find(word[i]) == string::npos ) dis += word[i] ;
    }
    
    if (dis.length() % 2 == 0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!" ;
    
    return 0 ;
}
