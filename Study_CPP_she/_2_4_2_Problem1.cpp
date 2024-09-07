#include <iostream> 
using namespace std;

// 문제 2-1의 1번 문제_함수
void increasN(int& n) {
	n++;
}

void swapN(int& n) {
	n = n * -1;
}

// 문제 2-1의 3번 문제_함수
void SwapPointer(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {

	// 문제 2-1의 1번 문제_메인 안
	int num = 10;

	cout << "기본 : " << num << endl;
	increasN(num);
	cout << "수치 증가 함수 이용 : " << num << endl;
	swapN(num);
	cout << "부호 변환 함수 이용 : " << num << endl;

	cout << "\n--------------------------" << endl;

	// 문제 2-1의 3번 문제_메인 안
	int v1 = 10;
	int* ptr1 = &v1;
	int v2 = 20;
	int* ptr2 = &v2;

	SwapPointer(ptr1, ptr2);

	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;

	return 0;
}