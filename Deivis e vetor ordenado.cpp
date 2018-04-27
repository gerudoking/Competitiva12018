#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	vector<int> vetor;

	cin >> n;
	for(int i = 0; i < n; i ++){
		int aux;
		cin >> aux;
		vetor.push_back(aux);
	}

	sort(vetor.begin(), vetor.end());

	for(int i = 0; i < n; i++){
		cout << vetor[i] << " ";
	}

	return 0;
}