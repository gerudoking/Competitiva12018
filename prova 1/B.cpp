#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n, m, grana = 0;
	vector<string> blues, reds;
	string aux;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		blues.push_back(aux);
	}

	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> aux;
		reds.push_back(aux);
	}

	for(int i = 0; i < n; i++){
		int granaAux = 0;

		for(int j = 0; j < n; j++){
			if(blues[i].compare(blues[j]) == 0){
				granaAux++;
			}
		}

		for(int j = 0; j < m; j++){
			if(blues[i].compare(reds[j]) == 0){
				granaAux--;
			}
		}

		if(granaAux > grana){
			grana = granaAux;
		}
	}

	cout << grana;


	return 0;
}