#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n, k, q, aux, quantosRecomendam = 0;
	vector<int> li, ri, ai, bi;

	cin >> n;
	cin >> k;
	cin >> q;

	for(int i = 0; i < n; i++){
		cin >> aux;
		li.push_back(aux);
		cin >> aux;
		ri.push_back(aux);
	}

	for(int i = 0; i < q; i++){
		cin >> aux;
		ai.push_back(aux);
		cin >> aux;
		bi.push_back(aux);
	}

	for(int i = 0; i < q; i++){
		for(int j = 0; j < n; j++){
			
		}
	}

	return 0;
}