#include <iostream>
using namespace std;
int main()
{
	int place = 3;
	int place2 = 5;
	int total = 0;
	while(place<1000||place2<1000){
		if(place%5!=0)
			total += place;
		place+=3;
		if(place2<1000){
			total+=place2;
			place2+=5;
		}
	}
	cout << total << endl;
	return 0;
}
