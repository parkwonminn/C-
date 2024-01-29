// 문자열과 포인터

// 문자 표현방법

// 컴퓨터에서는 각각의 문자에 숫자코드를 붙여서 표시한다.
// 아스키코드(ASCII code) : 표준적인 8비트 문자코드
// 0 ~ 127까지의 숫자를 이용한 문자표현

// 유니코드(unicode) : 표준적인 16비트 문자코드
// 전세계의 모든 문자를 일관되게 표현하고 다룰 수 있도록 설계

// 문자 상수
//#include <stdio.h>
//int main()
//{
//	char code1 = 'A';
//	char code2 = 65;
//
//	printf("code1 = %c, code1 = %d\n", code1, code1);
//	printf("code2 = %c, code2 = %d\n", code2, code2);
//}

// 아스키 코드 출력

//#include <stdio.h>
//int main()
//{
//	// 부호 없는 (unsigned) 정수를 표현할 때 사용되는 키워드
//	unsigned char code;
//
//	for ( code = 0; code < 128; code++)
//	{
//		printf("아스키 코드 %d는 %c입니다.\n", code, code);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char good[] = "Good";
//	char* bad = "Bad!";
//	printf("%s %s\n", good, bad);
//
//	good[0] = 'H';
//	printf("%s", good);
//	//good = "New good"; // 배열기반 문자열은 새로운 주소값 할당 불가능.
//
//	bad[0] = 'S'; // 불가능(실행은 되지만 값의 변화 없고 예외 처리됨. // 포인터 기반 문자열은 개별 요솟값이 할당 X
//	printf("%s\n", bad);
//}

// 문자 입출력 라이브러리

// int getchar(void) : 하나의 문자를 읽어서 반환한다.
// void putchar(int c) : 변수 c에 저장된 문자를 출력한다.
// scanf("%c" &c) : 하나의 문자를 읽어서 변수 c에 저장한다.
// printf("%c" , c) : 변수 c에 저장된 문자를 출력한다.

//#include <stdio.h>
//int main()
//{
//	int ch;
//
//	while (1)
//	{
//		ch = getchar();
//		if (ch == 'q')
//		{
//			break;
//		}
//		putchar(ch);
//	}
//}

// 문자열 단위 입출력 함수

//#include <stdio.h>
//int main()
//{
//	char str[20];
//	printf("문자열을 입력하세요 >>> ");
//	fgets(str, 20, stdin); // fgets() : 문자열을 입력받음
//	// stdin : 기본적으로 키보드 입력을 받아들인다.
//	// 10 : 10자리까지만 허용
//	puts(str); 
//}

// 문자열 처리 함수

#include <stdio.h>
#include <string.h> // C언어의 표준 라이브러리의 헤더 파일 중 하나다.
#pragma warning(disable:4996) // 보안 취약점 경고 무시

// string.h 주요 함수

// strlen(str) : 인자로 전달된 주소의 문자열에서 NULL 문자를 제외한 문자열 길이를 반환
// strcpy(str1, str2) : 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사
// strncpy(str1, str2, count) : 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사하되 원하는 개수만큼만 복사.
// strcat(str1, str2) : 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자로 전달된 주소의 문자열에 이어 붙이기
// strcmp(str1, str2) : 인자로 전달된 두 문자열을 비교하여 내용이 같다면 0을, 같지 않으면 0이 아닌 값을 반환

//int main()
//{
//	// strcpy() 함수는 C언어에서 문자열을 복사할 때 사용되는 함수
//
//	// strcpy 함수는 첫 번째 인자로 전달된 문자열의 크기를 검사하지 않으므로, 복사할 문자열의 크기가 두 번째 인자로 전달된 문자열보다 크면 버퍼 오버플로우(overflow)가 발생할 수 있다.
//
//	char src[] = "Hello world";
//	char dest[20];
//	strcpy(dest, src);
//	printf("복사된 문자열 : %s\n", dest);
//
//}

//int main()
//{
//	// strncpy() 함수는 strcpy 함수와 다르게, 복사할 문자열의 길이를 지정 O
//	// strncpy() 함수는 두 번째 인자로 전달된 문자열의 크기만큼만 문자열을 복사한다.
//	// 단 버퍼 오버플로우를 방지할 수 있지만 복사한 문자열의 널 종단 문자 포함 X, 따라서 복사할 문자열 끝에 널 종단문자를 추가해 주어야 한다.
//
//	char src[] = "Hello world";
//	char dest[20];
//	strncpy(dest, src, sizeof(dest)); // sizeof : 변수 또는 자료형의 크기를 반환
//	dest[sizeof(dest) - 1] = '\0'; // 복사한 문자열의 끝에 널 종단 문자 추가
//	printf("복사된 문자열 : %s\n", dest);
//}

// 문자열 이어붙이기, 문자열 비교

//int main()
//{
//	char str1[50] = "Korea";
//	char str2[50] = "Korea";
//
//	// str1에 문자열 붙이기
//	strcat(str1, "IT");
//	printf("%s\n", str1);
//
//	// str2에 문자열 붙이기
//	strcat(str2, "COOK");
//	printf("%s\n", str2);
//
//	//str1과 str2를 비교

//	// strcmp : 문자열을 비교할 때 사용되는 함수
//	printf("비교 결과 : %d\n", strcmp(str1, str2));
//}

// 문제 : 사용자로부터 문자열을 입력받아, 두 문자열이 같은지 비교하는 프로그램을 작성하세요.

// <입력>

// 첫 번째 문자열 입력 : hello
// 두 번째 문자열 입력 : Hello

// <출력>

// 두 문자열은 다릅니다.  or 같을시 두 문자열은 같습니다.

//int main()
//{
//	char str1[100], str2[100];
//	printf("첫 번째 문자열 입력 >> ");
//	fgets(str1, sizeof(str1), stdin);
//	
//	printf("두 번째 문자열 입력 >> ");
//	fgets(str2, sizeof(str2), stdin);
//
//	if (strcmp(str1,str2) == 0)
//	{
//		printf("두 문자열은 같습니다.");
//	}
//	else
//	{
//		printf("두 문자열은 다릅니다.");
//	}
//}

// 문제 : 다음의 C언어 프로그램을 작성해 보세요

// 1. 조건문을 사용하여 정수를 입력받아 양수, 음수, 0 중 어느 것인지 확인하는 프로그램
// 을 작성하세요.

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("정수를 입력하세요 >>> ");
//	scanf_s("%d", &num);
//	if (num > 0)
//	{
//		printf("양수입니다.");
//	}
//	else if (num < 0)
//	{
//		printf("음수입니다.");
//	}
//	else
//	{
//		printf("0입니다.");
//	}
//}

// 2. 반복문을 사용하여 1부터 10까지의 합을 구하는 프로그램을 작성하세요

//#include <stdio.h>
//int main()
//{
//	int avg = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		avg += i;
//	}
//	printf("%d\n", avg);
//}

// 3. 1차원 배열을 사용하여 5개의 정수를 키보드로 입력받고, 그 합을 구하는 프로그램을 작성하세요

//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("정수를 입력하세요 >>> ");
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("합 : %d\n", sum);
//}

// 4. 포인터를 사용하여 두 개의 정수를 입력받아, 그 합과 차를 구하는 프로그램을 
// 작성하세요

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int* ptr_a = &a, * ptr_b = &b;
//
//	printf("두 개의 정수를 입력하세요 >>> ");
//	scanf_s("%d%d", ptr_a, ptr_b);
//
//	printf("합 : %d\n", *ptr_a + *ptr_b);
//
//	if (b > a)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//		printf("차 : %d\n", *ptr_a - *ptr_b);
//	}
//	else
//	{
//		printf("차 : %d\n", *ptr_a - *ptr_b);
//	}
//	
//}