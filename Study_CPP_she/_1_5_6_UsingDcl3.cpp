#include <iostream>
using namespace std; // 앞으로 std의 이름공간에 있는 것들은 std::를 붙이지 않고 쓰겠다는 선언이다.

int main(void) {
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << " " << "A";
	cout << " " << 3.14 << endl;

	return 0;
}