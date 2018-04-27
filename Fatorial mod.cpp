#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

long long int fat(long long int x){
	if(x > 0)
		return (x * fat(x - 1))%1000000007;
	return 1;
}

int main(){
	long long int x, result;

	cin >> x;

	result = fat(x);

	cout << result;

	return 0;
}