#include <iostream>

namespace Hybrid {
	void HybFunc(void) {
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void) {
	using Hybrid::HybFunc; //  using을 사용해서 이름공간을 지정하지 않고 호출하겠다는 의미이다.
	HybFunc();

	return 0;
}