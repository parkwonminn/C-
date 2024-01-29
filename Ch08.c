#include <stdio.h>
//반복문
// 프로그램에서 반복적으로 실행되는 코드를 작성할 때 사용한다.

// 1. while문

// 조건이 참인 동안 반복적으로 코드를 실행합니다. while문의 구조는 다음과 같다.

//while (조건문)
//{
//	// 반복적으로 실행될 코드 예) : 조건이 참이면 반복적으로 실행할 코드를 실행하고, 조건이 거짓이면 반복문을 종료한다.
//}

//#include <stdio.h>
//int main()
//{
//	// 탈출용 변수
//	// 탈출용 조건식
//	// 탈출을 위한 연산식
//
//	int i = 1; // 탈출용 변수
//	while (i <= 10)
//	{
//		printf("Hello\n");
//		i++; // 탈출을 위한 연산식
//	}
//
//}

//02 1부터 10까지의 합 구하기

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 10)
//	{
//		printf("i = %d\n", i);
//		sum = sum + i; // sum += i
//		i++;
//	}
//	printf("while종료 이후 i = %d\n", i);
//	printf("1부터 10까지의 합 : %d\n", sum);
//}

//문제 : 키보드로부터 숫자하나(num)을 입력받아서
//1부터 N까지의 합을 구하시오.
//int main()
//{
//	int i = 0;
//	int N = 0;
//	int sum = 0;
//	printf("숫자(N)입력해라 >>> ");
//	scanf_s("%d", &N);
//	while (i <= N)
//	{
//		sum += i;
//		i++;
//	}
//	printf("1부터 N까지의 합 = %d\n",sum);
//}

//문제 구구단 출력 : 2단만 출력
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		printf("2 x %d = %d\n", i, 2 * i);
//		i++;
//	}
//}


// 구구단수 하나를(ex.4단이면 4) 입력받아 구구단 출력을 합니다

//int main()
//{
//	int dan = 0;
//	printf("구구단 수 입력 >>> ");
//	scanf_s("%d", &dan);
//	int i = 1;
//	while (i < 10)
//	{
//		printf("%d x %d = %d\n",dan, i, dan * i);
//		i++;
//	}
//}

// 1부터 10까지의 수중에 짝수끼리,홀수끼리 합 구하기(%연산자)

//int main()
//{
//	int i = 1;
//	int evensum = 0;
//	int oddsum = 0;
//	while (i <= 10)
//	{
//		if (i % 2 == 0)
//		{
//			//짝수
//			evensum += i;
//		}
//		else
//		{
//			//홀수
//			oddsum += i;
//		}
//		i++;
//	}
//	printf("1부터 10까이의 수중에 짝수의 합 = %d\n 홀수의 합 = %d\n", evensum, oddsum);
//}

//전체 구구단
//2단 ~ 9단까지 출력 1번

//int main()
//{
//	int i = 2;
//	while (i <= 9) // 2 ~ 9단까지 반복
//	{
//		int j = 1;
//		printf("%d단입니다.\n", i);
//		while (j <= 9)
//		{
//			printf("%d x %d = %d\n", i, j, i * j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

// 2번 구구단 역순 출력

//9 x 9 = 81
//9 x 8 = 72
//int main()
//{
//	int dan = 9;
//	int i = 0;
//	while (dan >= 2)
//	{
//		i = 9;
//		while (i >= 1)
//		{
//			printf("%d x %d = %d\n", dan, i, dan * i);
//			i--;
//		}
//		printf("\n");
//		dan--;
//	}
//}

// 문제 높이를 입력받아 높이만큼의 삼각형 출력

//출력 예
// 높이 : 3
//*
//**
//***

//int main()
//{
//	int n = 0;
//	printf("높이 : ");
//	scanf_s("%d", &n);
//
//	int i = 0; // 행
//	int j = 0; // 열(별)
//
//	while (i < n)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}