#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, aux, resultado = 0;
	vector<int> vetor;

	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> aux;
		vetor.push_back(aux);
	}

	for(int i = 0; i < n; i++){
		if((vetor[i] * -1) == 5 || vetor[i] == 5)
			resultado++;
	}

	cout << resultado;

	return 0;
}