#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, maior = 0;
	cin >> n;
	int vetor[n];

	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}

	for(int i = 0; i < n; i++){
		if(!(i == 0)){
			if(sqrt(pow(vetor[i] - vetor[i-1], 2)) > maior){
				maior = sqrt(pow(vetor[i] - vetor[i-1], 2));
			}
		}
	}

	cout << maior;

	return 0;
}