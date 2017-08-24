#include <bits/stdc++.h>

using namespace std;

void swapInt(int *ap, int *bp) {
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}

void swapAll(void *ap, void *bp, int size) {
	char buffer[size];
	memcpy(buffer, ap, size);
	memcpy(ap, bp, size);
	memcpy(bp, buffer, size);
}

void* lsearch(void *key, void *base, int n, int elemSize) {
	for(int i = 0; i < n; i++) {
		void* elemAddr = (char *)base + (i * elemSize);
		if(memcmp(key, elemAddr, elemSize) == 0) {
			return elemAddr;
		}
	}
	return NULL;
}

int main() {
	int a = 10;
	int b = 12;
	swapInt(&a, &b);
	cout << a << " " << b << "\n";

	double aa = 101.01;
	double bb = 101.223;

	char ac = 'A';
	char bc = 'B';

	char* as = strdup("Fredy");
	char* bs = strdup("Wilmawilma");


	swapAll(&aa, &bb, sizeof(double));
	swapAll(&a, &b, sizeof(int));
	swapAll(&ac, &bc, sizeof(char));
	swapAll(&ac, &bc, sizeof(char));
	swapAll(&as, &bs, sizeof(char*));

	cout << aa << " " << bb << "\n";
	cout << a << " " << b << "\n";
	cout << ac << " " << bc << "\n";

	cout << as << " " << bs << "\n";
	swapAll(as, bs, sizeof(char*));
	cout << as << " " << bs << "\n";

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 3;

	int *al = (int*)(lsearch(&key, &arr, 9, sizeof(int)));

	cout << *al << "\n";

	return 0;
}