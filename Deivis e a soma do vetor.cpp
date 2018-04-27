#include <iostream>

using namespace std;

int main(){
	int n, total = 0;
	cin >> n;
	int vetor[n];

	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}

	for(int i = 0; i < n; i++){
		total += vetor[i];
	}

	cout << total;

	return 0;
}