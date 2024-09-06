#include <iostream>

int main(void) {

	// 문제 1
	int v1, v2, v3, v4, v5;
	int result = 0;

	std::cout << "5개의 숫자를 입력 : ";
	std::cin >> v1 >> v2 >> v3 >> v4 >> v5;
	result = v1 + v2 + v3 + v4 + v5;
	std::cout << "합계 : " << result << std::endl;

	std::cout << "\n-----------------------\n" << std::endl;

	//  문제 2
	char name[30];
	char num[20];
	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;
	std::cout << "전화번호를 - 포함하여 입력하세요 : ";
	std::cin >> num;
	std::cout << "당신의 이름 : " << name << std::endl;
	std::cout << "당신의 전화번호 : " << num << std::endl;

	std::cout << "\n-----------------------\n" << std::endl;

	// 문제 3
	int v = 0;
	std::cout << "원하는 숫자를 입력하세요 : ";
	std::cin >> v;

	for (int i = 1; i < 10; i++) {
		std::cout << v << " x " << i << " = " << v * i << std::endl;
	}

	std::cout << "\n-----------------------\n" << std::endl;


	// 문제 4
	int money = 0;
	double mine = 0;

	while (money != -1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin >> money;
		if (money == -1)
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;

		mine = 50 + money * 0.12;
		std::cout << "이번 달 급여 : " << mine <<" 만원"<< std::endl;
	}

	return 0;

}