#include <iostream>
using namespace std;

bool IsPositive(int num) {

	if (num == 0)
		return false;
	else
		return true;

}

int main(void) {
	bool isPos;
	int num;
	cout << "입력 숫자 : ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
		cout << "Postive 숫자" << endl;
	else
		cout << "Negative 숫자" << endl;

	return 0;

}