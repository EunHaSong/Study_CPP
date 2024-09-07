#include <iostream>
using namespace std;

int main(void) {

	int n1 = 1020;
	int& n2 = n1; // n2는 참조자로서, n1의 메모리 공간을 같이 사용(참조)하겠다는 의미이다. -> n2나 n1 값이 수정되어도, 같은 값을 출력받을 수 있다.

	n2 = 3047;
	cout << "val : " << n1 << endl;
	cout << "ref : " << n2 << endl;

	cout << "val : " <<& n1 << endl;
	cout << "ref : " << &n2 << endl; // 같은 메모리 주소를 가지고 있음을 알 수 있음.

	return 0;

}
