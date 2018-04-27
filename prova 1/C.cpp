#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<vector<int> > tatus;
	int aux, felicidade, cont0 = 4;

	for(int i = 0; i < 5; i++){
		tatus.push_back(vector());
		for(int j = 0; j < 5; j++){
			cin >> aux;
			tatus[i].push_back(aux);
		}
	}

	while(!tatus.empty()){
		if(tatus.size() <= 1)
			break;
		
	}

	return 0;
}