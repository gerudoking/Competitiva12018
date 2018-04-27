#include <iostream>
#include <vector>

using namespace std;

bool VectorContainsTrue(vector<bool> v){
	for(unsigned i = 0; i < v.size(); i++){
		if(v[i])
			return true;
	}
	return false;
}

int main(){
	int n, m, altura, largura, possivelAltura;
	bool aux, flag;
	vector<bool> auxVector;
	vector<vector<bool> > matriz;

	altura = 0;
	largura = 0;
	possivelAltura = 0;
	flag = false;

	cin >> n;
	cin >> m;

	for(unsigned i = 0; i < n; i++){
		auxVector.clear();
		for(unsigned j = 0; j < m; j++){
			cin >> aux;
			auxVector.push_back(aux);
		}
		matriz.push_back(auxVector);
	}

	for(unsigned i = 0; i < n; i++){
		for(unsigned j = 0; j < m; j++){
			cout << matriz[i][j];
		}
	}

	for(unsigned i = 0; i < n; i++){
		if(VectorContainsTrue(matriz[i])){
			altura++;
			if(possivelAltura > 0){
				altura += possivelAltura;
				possivelAltura = 0;
			}
		}
		else{
			possivelAltura++;
		}

		for(unsigned j = 0; j < m; j++){
			if(!VectorContainsTrue(matriz[i]))
				break;
			else{
				if(j >= largura)
					largura++;
				matriz[i][j] = false;
			}
		}
	}

	cout << largura << "x" << altura;

	return 0;
}