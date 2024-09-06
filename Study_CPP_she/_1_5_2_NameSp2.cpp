#include <iostream>

// 선언과 정의를 분리할 수 있다.
namespace BestCom1 {
	void SimpleFunc(void);
}

namespace ProgCom1 {
	void SimpleFunc(void);
}

int main(void) {
	BestCom1::SimpleFunc();
	ProgCom1::SimpleFunc(); 

	return 0;
}

// 아래처럼 '범위지정 연산자'를 작성하여 정의해줘야 한다.
void BestCom1::SimpleFunc(void) {
	std::cout << "BestCom1가 정의한 함수" << std::endl;
}

void ProgCom1::SimpleFunc(void) {
	std::cout << "ProgCom1가 정의한 함수" << std::endl;
}