#include <iostream>
using namespace std;

int RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int num2 = RefRetFuncOne(num1); // num1과 num2는 별개의 변수로 이해하면 된다.

	num1 += 1;
	num2 += 100;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}