#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	long long int n = 1, x, sum = 0;

	cin >> x;

	while(sum <= x){
		n++;
		sum = n*(n+1)/2;
	}

	cout << n;

	return 0;
}