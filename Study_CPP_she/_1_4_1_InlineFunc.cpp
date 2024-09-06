#include <iostream>
#define SQUARE(x) ((x) * (x)) // 매크로 함수


// 인라인 함수 형태
inline int SQU(int x) {
	return x * x;
}

int main(void) {
	std::cout << SQU(5.5) << std::endl;;
	std::cout << SQU(12) << std::endl;;

	std::cout << SQUARE(5.5) << std::endl;;   // 매크로 함수의 경우는 타입에 대한 손실이 발생하지 않음, 인라인 함수와 다르게
	std::cout << SQUARE(12) << std::endl;;

	return 0;
}
