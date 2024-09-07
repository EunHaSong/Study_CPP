#include <iostream>
using namespace std;

int main(void) {

	const int n = 12;
	const int* ptr = &n;
	const int*(& ref) = ptr;

	cout << "ptr를 통한 n 출력 = " << *ptr << endl;
	cout << "ref를 통한 n 출력 = " << *ref << endl;

	return 0;
}