#include <iostream>
using namespace std;

int main(void) {
	int num = 10;
	int i = 0;

	cout << "true : " << true << endl;
	cout << "false : " << false << endl;

	while (true) {
		cout << i++ << ' ';
		if (i > num) {
			break;
		}
	}
		cout<< endl;

	cout << "sizeof 1 : " << sizeof(1) << endl;		// int 타입은 4 byte
	cout << "sizeof 0 : " << sizeof(0) << endl;
	cout << "sizeof true : " << sizeof(true) << endl; // bool 타입은 1byte
	cout << "sizeof false : " << sizeof(false) << endl;

	return 0;
}