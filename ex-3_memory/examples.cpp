#include <bits/stdc++.h>

using namespace std;

struct Fractions {
	int num;
	int denom;
};


int main() {
	
	// exp: 1
	double PI = 3.1416;
	char ch = *(char *)&PI;
	cout << ch << "\n";

	// exp: 2
	short s = 45;
	double d = *(double *)&s; 

	cout << d << "\n";

	// exp: 3
	Fractions pi;
	pi.num = 22;
	pi.denom = 7;

	Fractions* share_pi = ((Fractions *)(&pi.denom));
	// ((Fractions *)(&pi.denom))->num = 12;
	share_pi->num = 12;

	cout << pi.denom << "\n";

	// exp: 4

	int two = 2;
	int array[10];
	double two_and_a_half_man = 2.5;


	array[0] = 0;
	array[9] = 9;
	array[5] = 5;
	array[10] = 10;
	array[25] = 25;
	for(int i = 1; i < 20; i++){
		array[-i] = 77;
		if(two != 2){
			cout << i << "\n";
			cout << two << "\n";
			break;
		}
	}

	cout << two << " " << two_and_a_half_man << "\n";

	// exp: 5
	int arr[5]; 
	arr[3] = 128;

	((short *)arr)[6] = 2;
	
	cout << arr[3] << endl;

	((short*) (((char*) (&arr[1])) + 6))[1] = 25;

	cout << arr[3] << endl;


	return 0;
}