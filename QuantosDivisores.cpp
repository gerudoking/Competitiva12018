#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	long long int x;
	vector<long long int> vetor;

	cin >> x;

	for(long long int a = 1; a*a <= x; a++){
		if(x%a == 0){
			long long int b = x/a;
			vetor.push_back(a);
			if(a != b)
				vetor.push_back(b);
		}
	}

	cout << vetor.size();

	return 0;
}