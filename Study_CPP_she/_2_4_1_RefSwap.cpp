#include <iostream>
using namespace std;

void SwapByRef(int& v1, int& v2) {

	int temp = v1;
	v1 = v2;
	v2 = temp;

}


int main(void) {
	int v1 = 10;
	int v2 = 20;

	SwapByRef(v1, v2);

	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	
	return 0;

}