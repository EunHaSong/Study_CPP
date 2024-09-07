#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); // 위의 함수의 경우, 반환 받는 변수까지 num1의 메모리 공간을 참조 받게 된다.

	num1++;
	num2++;

	cout << num1 << endl;
	cout << num2 << endl;
	return 0;

}