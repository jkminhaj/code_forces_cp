// problem link : https://codeforces.com/problemset/problem/1560/A
#include <iostream>
using namespace std ;

void Kth_elemment (int number) {
    int skipped = 0 , result = 0 ;
	for (int i = 1 ; i<= number ; i++) {
		if(i%3==0 || i%10==3) {
		    number++ ;
		    continue ;
		}
		result = i ;
	}
	cout << result << endl ;
}

int main () {
    int size ;
    cin >> size ;
    int arr[size] ;
    
    for(int i = 0 ; i<size ; i++) {
        cin >> arr[i] ;
    }
    for(int i = 0 ; i<size ; i++) {
        Kth_elemment(arr[i]);
    }
    
	return 0 ;
}
