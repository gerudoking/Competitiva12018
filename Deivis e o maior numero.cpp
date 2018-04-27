#include <iostream>

using namespace std;

int main(){
	int n, bigger = 0;
	cin >> n;
	int vetor[n];
	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}

	for(int i = 0; i < n; i++){
		if(vetor[i] > bigger){
			bigger = vetor[i];
		}
	}

	cout << bigger;

	return 0;
}