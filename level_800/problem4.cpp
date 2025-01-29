// problem link : https://codeforces.com/problemset/problem/520/A
#include <iostream>
using namespace std ;
int main()
{

	string word , lower, dist , result = "YES" ;
	lower, dist = "" ;
	int trush ;
	
	cin >> trush >> word ;
	
	for (char item : word) {
		char alpha = tolower(item) ;
		lower += alpha ;
	}

	for(int i = 0 ; i< lower.length() ; i++) {
		if(dist.find(lower[i]) == string :: npos) dist += lower[i] ;
	}
	
    for(int i = 97 ; i<= 122 ; i++ ){
        
        char alpha = i ;
     
        if(lower.find(alpha)==string::npos) {
            result = "NO" ;
            break ;
            
        }
    }
	
	cout << result ; 
	
	return 0;
}
