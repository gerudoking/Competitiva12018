#include <iostream>

using namespace std;

long long int fibonnaci(long long int n){
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;

	return fibonnaci(n-1)+fibonnaci(n-2);
}

int main(){
	long long int n;

	cin >> n;

	cout << fibonnaci(n);

	return 0;
}