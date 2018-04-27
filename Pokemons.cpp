#include <iostream>
#include <vector>

using namespace std;

int main(){
	int pokeNum;
	int winner = -1;
	int aux;
	vector<int> pokeStrength;
	vector<int> pokeWins;
	vector<int>::iterator it;

	cin >> pokeNum;
	for(unsigned i = 0; i < pokeNum; i++){
		cin >> aux;
		pokeStrength.push_back(aux);
		pokeWins.push_back(0);
	}

	for(unsigned i = 0; i < pokeStrength.size(); i++){
		if(i + 1 > pokeStrength.size())
			break;

		if(winner == -1){
			if(pokeStrength[i] > pokeStrength[i+1]){
				winner = i;
				pokeWins[i]++;
			}
			else{
				winner = i+1;
				pokeWins[i+1]++;
			}
		}
		else{
			if(pokeStrength[winner] < pokeStrength[i+1]){
				winner = i + 1;
				pokeWins[i+1]++;
			}
			else{
				pokeWins[winner]++;
			}
		}
	}

	for(unsigned int i = 0; i < pokeNum; i++){
		cout << pokeWins.at(i);
	}

	return 0;
}