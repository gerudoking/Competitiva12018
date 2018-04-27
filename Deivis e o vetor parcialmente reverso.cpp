#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, l, r;
	vector<int> vetor;

	cin >> n;
	cin >> l;
	cin >> r;
	for(int i = 0; i < n; i ++){
		int aux;
		cin >> aux;
		vetor.push_back(aux);
	}

	reverse(vetor.begin() + l - 1, vetor.begin() + r);

	for(int i = 0; i < n; i++){
		cout << vetor[i] << " ";
	}

	return 0;
}