#include <iostream>

// 디폴트 값을 부분적으로 설정하고 싶은 경우 -> 반드시 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 함.
int BoxVuloume(int length, int width = 1, int height = 1);

int main(void) {
	std::cout << "[3,3,3] : " << BoxVuloume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVuloume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVuloume(7) << std::endl;
	// std::cout << "[D,D,D] : " << BoxVuloume() << std::endl; -> 해당 행은 컴파일 에러임.(디폴트 값이 없기 때문)

	return 0;
}

int BoxVuloume(int length, int width, int height){
	return length * width * height;
}
