#include <iostream>
using namespace std;

int main() {
	int flip = 1;
	int flop = 2;
	int temp;
	int total = 0;
	while(flop<4000000)
	{
		total+=flop;
		flip+=flop;
		flop+=flip;
		flip+=flop;
		temp = flop;
		flop = flip;
		flip = temp;
	}
	cout << total << endl;
	return 0;
}
