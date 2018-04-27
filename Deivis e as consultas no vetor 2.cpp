#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	int n, q, aux;
	vector<int> vetor, consultas;

	cin >> n;
	cin >> q;

	for(int i = 0; i < n; i++){
		cin >> aux;
		vetor.push_back(aux);
	}

	sort(vetor.begin(), vetor.end());

	for(int i = 0; i < q; i++){
		cin >> aux;
		consultas.push_back(aux);
	}

	for(int i = 0; i < consultas.size(); i++){
		auto resultado = lower_bound(vetor.begin(), vetor.end(), consultas[i]);
		if(resultado == vetor.end())
			cout << -1 << "\n";
		else
			cout << *resultado << "\n";
	}

	return 0;
}