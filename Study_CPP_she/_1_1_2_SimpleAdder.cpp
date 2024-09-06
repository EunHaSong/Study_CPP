#include <iostream>

int main(void) {

	// scanf를 대신하는 방식
	int val1, val2;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;

	std::cout << "\n---------------------- " << "\n" << std::endl;

	double val3, val4;

	std::cout << "세 번째 실수 입력 : ";
	std::cin >> val3;
	std::cout << "네 번째 실수 입력 : ";
	std::cin >> val4;

	double result2 = val3 + val4;
	std::cout << "double 형 숫자 더하기 결과 : " << result2 << std::endl;

	// 문자열의 입력
	/*
	char str[100];
	std::cin >> str;
	*/

	return 0;

}