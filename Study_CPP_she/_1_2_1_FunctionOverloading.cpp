#include <iostream> 

void MyFunc(void) {
	std::cout << "MyFunc(void)가 호출되었음." << std::endl;
}
void MyFunc(char c) {
	std::cout<<"MyFunc(char c)가 호출되었음." << std::endl;
}
void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b)가 호출되었음." << std::endl;
}

int main(void) {

	MyFunc();
	MyFunc('a');
	MyFunc(12,13);

	return 0;
}