#include <iostream>
#include <vector>

using namespace std;

int main(){
	int citizens;
	int aux;
	int output;
	int biggerMoney = 0;
	vector<int> money;
	vector<int>::iterator moneyIterator;

	cin >> citizens;

	for(unsigned i = 0; i < citizens; i++){
		cin >> aux;
		money.push_back(aux);
	}

	for(moneyIterator = money.begin(); moneyIterator != money.end(); moneyIterator++){
		if(*moneyIterator > biggerMoney)
			biggerMoney = *moneyIterator;
	}

	for(moneyIterator = money.begin(); moneyIterator != money.end(); moneyIterator++){
		output += biggerMoney - *moneyIterator;
		//*moneyIterator = biggerMoney;
	}

	cout << output;

	return 0;
}