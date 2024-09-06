#include <iostream>

int main(void) {

	int val1, val2;
	int result = 0;

	std::cout << "두 개의 숫자 입력 : ";
	std::cin >> val1 >> val2;    
	// 2가지 이상의 변수를 한번에 입력 받을 수 있음
	//숫자 간의 경계는 탭, 스페이스바, 엔터키 입력과 같은 공백에 의해 나눠짐


	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)    // for 문 내에서도 변수 선언이 가능하다.
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++) 
			result += i;
	}

	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
	return 0;

}