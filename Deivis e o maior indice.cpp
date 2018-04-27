#include <iostream>

using namespace std;

int main(){
	int n, x, maior = -1;

	cin >> n;
	cin >> x;

	int vetor[n];

	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}

	for(int i = 0; i < n; i++){
		if(vetor[i] >= x){
			maior = i+1;
		}
	}

	cout << maior;

	return 0;
}