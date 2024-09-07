#define _CRT_SECURE_NO_WARNINGS // 경고 무시
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void) {

	// 문제 1번
	char string[100] = "songhaeun"; // 문자열 초기화
	char test[100] = ""; // 빈 문자열

	// 문자열 관련 함수 사용
	cout << "strlen : " << strlen(string) << endl;  // 문자열 길이 출력
	strcat(string, "hi");  // 문자열 뒤에 "hi"를 붙임
	cout << "strcat : " << string << endl;  // 붙인 결과 출력
	strcpy(test, string);  // 문자열 복사
	cout << "strcpy : " << test << endl;  // 복사된 결과 출력
	cout << "strcmp : " << strcmp(test, string) << endl;  // 두 문자열 비교 (동일하면 0 반환)

	// 문제 2번
	srand(time(NULL));  // 랜덤 시드 초기화
	for (int i = 0; i < 5; i++)
		cout << "random " << i << " : " << rand() % 100 << endl;  // 0부터 99 사이의 랜덤 값 출력

	return 0;
}
