#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long int n, aux;
	vector<long long int> vetor;
	long long int resultado = 0;

	cin >> n;

	for(unsigned i = 0; i < n; i++){
		cin >> aux;
		vetor.push_back(aux);
	}

	for(int i =0; i <n; i++)
	{
    	vetor.at(i);
    	resultado += (vetor.at(i)*((n-(i+1)+1)*(i+1)));
	}

	cout << resultado;

	return 0;
}