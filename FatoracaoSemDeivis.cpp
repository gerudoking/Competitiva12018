#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <utility>
#include <map>

using namespace std;

int main(){
	long int q;
	long int N = 1000001;
	vector<long int> lp(N, -1);

	for(long int x = 2; x < N; x++)
	  	if(lp[x] == -1){ 
    		for(long int m = x; m < N; m += x) 
    			lp[m] = x;
  		}

  	scanf("%ld", &q);

  	for(long int i = 0; i < q; i++){
  		long int x;
  		vector<pair<long int, long int> > result;
  		scanf("%ld", &x);
  		map<long int, long int> expoentes;
  		while(x > 1){
   			expoentes[ lp[x] ]++;
  			x /= lp[x];
  		}
  		vector<pair<long int, long int> > ans;
  		for(pair<long int, long int> p : expoentes)
    		printf("%ld ", p.first);
  		printf("\n");
  	}

	return 0;
}