// Solving generics of C 

#include <bits/stdc++.h>

using namespace std;

int intcmp(void* elem1, void* elem2) {
	int* ip1 = (int*)elem1;
	int* ip2 = (int*)elem2;

	return *ip1 - *ip2;
}

int strCmp(void* elem1, void* elem2) {
	char* s1 = *(char**)elem1;
	char* s2 = *(char**)elem2;
	cout << s1 << " " << s2 << "\n";
	return strcmp(s1, s2);
}

void* lSearch(void* key, void* base, int n, int elemSize, int (*cmpfn)(void*, void*)) {
	for (int i = 0; i < n; ++i) {
		void* elemAddress = (char*)base + i * elemSize;
		if(cmpfn(key, elemAddress) == 0) {
			return elemAddress;
		}
	}
	return NULL;
}

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 3;
	int size = 9;
	int* found = (int*)lSearch(&key, arr, size, sizeof(int), intcmp);
	if(found == NULL) cout << "NOT Found\n";
	else cout << "Found " << *found << "\n";

	char* notes[] = { "Ab", "Gb", "F#", "B", "D" };
	char* favoriteNote = "Gb";
	char** charFound = (char**)lSearch(&favoriteNote, notes, 5, sizeof(char*), strCmp);
	if(charFound == NULL) cout << "Not Found\n";
	else cout << **charFound << "\n";

	return 0;
}