#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* MakeStrAdr(int len) {
	// char* str = (char*)malloc(sizeof(char) * len); -> 이 경우는 c언어에서 사용하는 경우.
	
	// new를 사용하여 더 간단하게 사용 가능
	char* str = new char[len];

	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");

	cout << str << endl;
	delete[]str;

	return 0;
}
