#include <iostream>
using namespace std;

int main(void) {

	// 변수들
	int num = 12; 
	int* ptr = &num; 
	int** dptr = &ptr;

	// 참조자들
	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;


	return 0;

}