#include <iostream>

using namespace std;

int main(){
	int n, k, totalDeHoras, velasNovas, velasUsadas;

	cin >> n;
	cin >> k;

	velasNovas = n;
	velasUsadas = 0;
	totalDeHoras = 0;

	while(velasNovas > 0){
		velasNovas--;
		totalDeHoras++;
		velasUsadas++;
		if(velasUsadas >= k){
			velasUsadas -= k;
			velasNovas++;
		}
	}

	cout << totalDeHoras;

	return 0;
}