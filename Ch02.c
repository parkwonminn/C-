// 01 양수

// 10진수데이터를 저장요청시
// 2진데이터로 진법 변환되어 저장하게 된다.
// 이 때 2진 데이터 하나를 담는 공간 단위를 비트(bit)라고 한다.

// 10진수 -> 2진수		필요 비트 수
// 0			0		1
// 1			1		1
// 2			10		2
// 3			11		2
// 4			100		3
// 44			101100(32 + 8 + 4)  6
// 31
// 112
// 59
// 58

// 2진수		->		10진수
// 11000001				128 + 64 + 1 = 193
// 10101001				128 + 32 + 8 + 1 = 169
// 11100101
// 10001010
// 00111010

//참고(8비트)
//1		1		1		1		1		1		1		1
//128	64		32		16		8		4		2		1  = 255

// 03 음수의 저장방식
// 보수 개념 사용

//CPU는 가산회로가 존재하기 때문에 덧셈연산을 할 수 있다? O  
//CPU는 감산회로가 존재하기 때문에 뺄셈연산을 할 수 있다? X
//감산회로가 없는 CPU가 뺼셈 연산을 할 수 있는 이유는
//뺄셈처리를 보수개념으로 바꿔 처리하기 때문이다.

// 5 - 5 = 0

// 7 - 3 = 4
// 7 + 7 = 14

// 1) 음수 계산(2의 보수)
//00000101 = 5
//11111101 = -5 (2의보수로 구한다) 
//10000000 = -128
//10000001 = -128 + 1 = -127
//11111111 = -1
//00000000 = 0
//00000001 = 1


// 04 실수의 처리방식

// 소수점이하 (가수부)를 포함하는 수
// 실수의 가수부에 대한 범위는 무한대에 가깝기 때문에
// 컴퓨터의 메모리공간에 소수점이하의 수범위를 다 담아내지 못한다.
// 해서 소수점이 00자리까지만 유효범위로 정하여 실수값을 저장하기 때문에 실수값은 오차가 발생할 수밖에 없다.
// 실수값의 소수점의 위치를 지정하는 방식은
// 고정소수점 방식과 부동소수점 방식이 있다.
// 고정소수점 : 소수점의 위치가 미리 고정
// 부동소수점 : 삽입되는 데이터값에 따라 소수점위치가 변경

// 05 자료형 & 변수
// 자료형 : Data 저장을 위해 미리 예약된 예약어
// 정수 자료형 ------
// int : 4byte 정수 : 숫자를 받기위한 자료형이다.
// char : 1byte
// short : 2byte
// long long : 8byte
// 실수 자료형 ------
// double : 8byte
// float : 4byte


//#include <stdio.h>
//int main()
//{
//	int n1; // 변수를 선언 //4byte 정수공간 형성
//
//	n1 = 10; // 변수공간에 값 대입
//			 // =(대입연산자) 공간 = 값(먼저처리)
//			 // 10이라는 Data값을 먼저 저장한 뒤
//			 // n1공간에 복사(대입)
//
//	printf("%d\n", n1); // 변수 서식문자에 맞게 출력
//
//	int n2 = 20; // 변수 초기화
//
//	printf("%d\n", n1 + n2); // n1안의 값 + n2안의 값 %d 정수 서식에 맞게 출력
//}

// 문제 

////num1변수를 10으로 초기화
////num2변수를 20으로 초기화
////num3변수를 정의(선언)한 후 num1과 num2의 합을 대입
////num4변수를 정의(선언)한 후 num2과 num1의 차를 대입
////prinft()함수와 서식문자(%d)를 이용해서 num3,num4를 출력

//#include <stdio.h>
//int main() {
//	int num1;	
//	int num2;
//	int num3;
//	int num4;
//
//	num1 = 10;
//	num2 = 20;
//	num3 = num1 + num2;
//	num4 = num2 - num1;
//
//	printf("%d %d\n", num3,num4);	 
//
//
//
//	return 0;
//}

// 05 정수 자료형

//#include <stdio.h>
//int main()
//{
//	//char n1 = 10; //자료형 불일치 
//	//short n2 = 20; // 자료형 불일치
//	//int n3 = 30; // 자료형 일치 32
//	//long long n4 = 50LL; // 리터럴 접미사 : LL(long long)  
//	//char n1 = 'A';
//	//printf("%c", n1);
//	
//}

// 06 실수 자료형

//#include <stdio.h>
//int main()
//{
//	float var1 = 0.33333333333333333F;
//	double var2 = 0.333333333333333333333;
//
//	printf("%.20f\n", var1);
//	printf("%.20f\n", var2);
//}

// 07 단일 문자 자료형


//// 단일 문자 저장을 위해서 약속된 코드표를 참고하여
//// 해당 코드표에 지정된 비트열로 저장시킨다
//// C언어는 ASCII코드표를 이용한다
//// 문자 or 숫자 든 간에 전부 비트열로 저장된다

//#include <stdio.h>
//int main()
//{
//	char ch1 = 'a'; // 문자
//	char ch2 = 97; //10진법
//	char ch3 = 0b1100001; // 16진법
//	
//	printf("ch1 = %c\n", ch1); // %c : 문자(문자열 X) 1byte만을 받을 수 있는 서식이다.
//	printf("ch2 = %c\n", ch2);
//	printf("ch3 = %c\n", ch3);
//}

//08 문자열 저장(배열)
// 단일문자 : 'a'
// 문자열 "hello" -> (6byte필요)
// 중요!! 문자열은 마지막에 NULL문자(\0)를 반드시 포함
// 배열: 같은 자료형으로 연속적인 공간 형성
// char arr[3] -> char크기를요소로 3칸짜리 배열 형성

//#include <stdio.h>
//int main()
//{
//	char str1[10] = "hello";
//	char str2[12] = "hello world"; // 뛰어쓰기는 1byte씩 잡는다.
//	char str3[3] = "가"; // 한글은 글자당 2바이트씩 잡는다.
//
//	printf("%s\n", str1); // %s : 문자열을 받는 서식이다.
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//}


//// 이름(자료형 char name[10]) : 홍길동
//// 나이(int age) : 44
//// 성별(char gender) : 'M'
//// 주소(char addr[100]) : 대구광역시 중구
////각각 자료형과 변수/배열명을 참고해서
//// Data값을 저장 한 이후에 서식문자 잘 고려해서 printf()
//// 하세요
//// 출력 예 
//// 1.이름 : 홍길등
//// 2.나이 : 44세
//// 3.성별 : M
//// 4.주소 대구광역시 중구

//#include <stdio.h>
//int main()
//{
//	char name[10] = "홍길동";
//	int age = 44;
//	char gender = 'M';
//	char addr[100] = "대구광역시 중구";
//
//	printf("1. 이름 : %s\n", name);
//	printf("2. 나이 : %d\n", age);
//	printf("3. 성별 : %c\n", gender);
//	printf("4. 주소 : %s\n", addr);
//
//
//}
