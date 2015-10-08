#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<int> primes;
	primes.push_back(2);
	long long target = 600851475143;
	int limit = (int)sqrt(target);
	for(int i=3; i<=limit; i+=2) {
		bool prime = true;
		for(int j=0; j<primes.size(); j++) {
			if(i%primes[j]==0){
				prime = false;
				break;
			}
		}
		if(prime) {
			primes.push_back(i);
		}
	}
	for(int i=primes.size()-1;i>0;i--) {
		cout << primes[i] << endl;
		if(target%primes[i]==0) {
			cout << "Target: " << primes[i] << endl;
			return 0;
		}
	}
}
