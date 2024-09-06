#include <iostream>

namespace BestCom1 {
	void SimpleFunc(void);
}

namespace BestCom1 {
	void PrettyFunc(void);
}

namespace ProgCom1 {
	void SimpleFunc(void);
}

int main(void) {
	BestCom1::SimpleFunc();

	return 0;
}

// 이름 공간이 같은 경우는, 이름 공간을 따로 명시하여 작성할 필요가 없다.
void BestCom1::SimpleFunc(void) {
	std::cout << "BestCom1가 정의한 함수" << std::endl;
	PrettyFunc();
	ProgCom1::SimpleFunc();
}

void BestCom1::PrettyFunc(void) {
	std::cout << "So Pretty" << std::endl;
}

void ProgCom1::SimpleFunc(void) {
	std::cout << "ProgCom1가 정의한 함수" << std::endl;
}