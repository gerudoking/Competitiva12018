#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdio>

using namespace std;

vector<long long int> GetDiv(long long int N){
	vector<long long int> nDiv(N, 0);
	for(long long int x = 1; x < N; x++){
		for(int m = x; m < N; m += x){
			nDiv[m]++;
		}
	}

	return nDiv;
}

int main(){
	long long int q;
	vector<long long int> vetor = GetDiv(1000001);
	vector<long long int> constultas;

	scanf("%lld", &q);
	for(long long int i = 0; i < q; i++){
		long long int aux;
		scanf("%lld", &aux);
		constultas.push_back(aux);
	}

	for(long long int i = 0; i < q; i++){
		printf("%lld \n", vetor[constultas[i]]);
	}

	return 0;
}