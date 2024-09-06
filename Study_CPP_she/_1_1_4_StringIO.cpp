#include <iostream>

int main(void) {
	
	char name[100];
	char lang[100];

	std::cout << "당신의 이름은 무엇입니까? : ";
	std::cin >> name;
	std::cout << "좋아하는 프로그래밍 언어는 무엇입니까? : ";
	std::cin >> lang;

	std::cout << "\n\n내 이름은 " << name << " 입니다." << std::endl;
	std::cout << "제일 좋아하는 언어는 " << lang << " 입니다." << std::endl;
	return 0;
	}