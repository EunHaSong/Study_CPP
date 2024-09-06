#include <iostream>


// 이름 스페이스 : 같은 함수(이름도 같고, 인자도 같은 경우)여도, 다른 함수로 사용할 수 있도록 다른 공간에 정의가 가능하다. +) 변수도
namespace BestCom {
	void SimpleFunc(void) {
		std::cout << "BestCom가 정의한 함수" << std::endl;
	}
}

namespace ProgCom {
	void SimpleFunc(void) {
		std::cout << "ProgCom가 정의한 함수" << std::endl;
	}
}

int main(void) {
	BestCom::SimpleFunc();
	ProgCom::SimpleFunc();  // 이름 스페이스 안의 함수를 호출하는 방식  -> 여기서 :: 연산자는 '범위 지정 연산자'라고 한다.

	return 0;
}