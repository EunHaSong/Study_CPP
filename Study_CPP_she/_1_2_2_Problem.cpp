#include <iostream>

void swap(int * n1, int *  n2) {
	int temp;
	temp = *n1; // & 는 주소 연산자 , *는 참조 연산자
	*n1 = *n2;
	*n2 = temp;
}

void swap(char* c1, char* c2) {
	char temp;
	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void swap(double* db1, double* db2) {
	double temp;
	temp = *db1;
	*db1 = *db2;
	*db2 = temp;
}



int main(void) {
	int n1 = 20, n2 = 30;
	swap(&n1, &n2);
	std::cout << n1 << " " << n2 << std::endl;

	char c1 = 'A', c2 = 'Z';
	swap(&c1, &c2);
	std::cout << c1 << " " << c2 << std::endl;

	double db1 = 1.1111, db2 = 5.5555;
	swap(&db1, &db2);
	std::cout << db1 << " " << db2 << std::endl;

	return 0;
}