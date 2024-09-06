#include <iostream>

using std::cin;
using std::cout;
using std::endl;

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int main(void) {
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // 위와 같은 방식으로, 이름 공간을 압축시킬 수 있다.
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	return 0;

}