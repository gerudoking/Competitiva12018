#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m, aux;
	vector<int> valores;
	vector<int> pesos;
	vector<int> prioridade;

	cin >> n;
	cin >> m;

	for(int i = 0; i < n; i++){
		cin >> aux;
		valores.push_back(aux);
	}

	for(int i = 0; i < n; i++){
		cin >> aux;
		pesos.push_back(aux);
	}

	/*for(int i = 0; i < n; i++){
		if(prioridade.empty())
			prioridade.push_back(i);
		else{
			if(valores[prioridade.front()] < valores[i]){
				prioridade.insert(prioridade.begin(), i);
			}
		}
	}*/

	sort(valores.begin(), valores.end());
	sort(pesos.begin(), pesos.end());

	

	return 0;
}