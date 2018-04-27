#include <iostream>

using namespace std;

int main(){
	int yan, jose, cYan, cJose, energia;

	cYan = 1;
	cJose = 1;
	energia = 0;

	cin >> yan;
	cin >> jose;

	while(yan != jose){
		if(yan > jose)
			yan--;
		else
			yan++;
		energia += cYan;
		cYan++;

		if(yan == jose)
			break;

		if(jose > yan)
			jose--;
		else
			jose++;
		energia += cJose;
		cJose++;
	}

	cout << energia;

	return 0;
}