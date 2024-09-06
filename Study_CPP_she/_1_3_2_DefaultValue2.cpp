#include <iostream>

// 디폴트 값은 함수를 선언할 때에만 작성해도 괜찮다. -> 함수의 정의 부분에는 디폴트값을 작성하지 않아도 괜찮다.
int Adder(int n1 = 1, int n2 = 2);

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

int Adder(int n1, int n2) {
	return n1 + n2;
}
