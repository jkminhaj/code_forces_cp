// problem link : https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std ;

void calc (int &remaining, int &steps, int n ) {
	remaining -= n ;
	steps++ ;
}
int main()
{
	int x , steps = 0 ;
	cin >> x ;
	int remaining = x;

	while (remaining >= 1) {
		if(remaining == 1) calc(remaining,steps,1);
		if(remaining == 2) calc(remaining,steps,2);
		if(remaining == 3) calc(remaining,steps,3);
		if(remaining == 4) calc(remaining,steps,4);
		if(remaining >= 5) calc(remaining,steps,5);
	}

	cout << steps ;

	return 0;
}


