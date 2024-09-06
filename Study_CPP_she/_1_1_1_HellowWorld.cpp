#include <iostream> // 옛날 표준 라이브러리와 구분을 두기 위해서 .h를 생각하기로 하였음.

int main(void) {

	// printf를 대신하는 방식 
	int num = 20;

	std::cout << "hello" << " world!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << " " << "A";
	std::cout << " " << 3.14 << std::endl; // std::endl 의 경우 개행을 의미함.

	std::cout <<"\n---------------------- "<<"\n" << std::endl;

	return 0;

}