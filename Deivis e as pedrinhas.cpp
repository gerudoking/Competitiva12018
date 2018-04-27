#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
	int n;
	string aux;
	set<string> conjunto;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		if(!conjunto.count(aux))
			conjunto.insert(aux);
	}

	cout << conjunto.size();

	return 0;
}