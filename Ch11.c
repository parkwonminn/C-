#include <stdio.h>
// 함수
// 수를 담아서 처리하는 논리적인 공간
// 프로그램 내의 특정한 기능을 담당하는 작은 프로그램으로 해석
// 모듈화에 사용된다.

// 모듈이란?
// 모듈 : 독립되어 있는 프로그램의 일부분
// 모듈러 프로그래밍 : 모듈 개념을 사용하는 프로그래밍 기법
// 모듈러 프로그래밍의 장점 :
// 1. 각 모듈들은 독자적으로 개발이 가능
// 2. 다른 모듈과 독립적으로 변경 가능
// 3. 유지 보수가 쉬워진다.
// 4. 모듈의 재사용 가능

// C언어에서는 모듈과 함수가 같은 말이다.
// 함수란 무엇인가?
// 함수(function): 특정한 작업을 수행하는 독립적인 부분
// 함수 호출(function call) : 함수를 호출하여 사용하는 것
// ex) 함수는 입력을 받으면 출력을 생성한다.

// 함수들의 연결
// 프로그램은 여러 개의 함수들로 이루어져 있다.
// 함수 호출을 통하여 서로 연결된다.
// 제일 먼저 호출되는 함수는 main() 이다.

// 함수의 종류

// 함수 1. 사용자 정의 함수, 2. 라이브러리 함수

// 함수의 정의
// 반환형(return type)
// 함수 헤더 (function header)
// 함수 몸체 (function body)

// main(void) 쓰는 이유 // void : 없다, 존재하지 않는다.

// C언어에서 main() 함수의 반환형은 반드시 정의되어야 한다. void 반환형은 main() 함수가 값을 반환하지 않음을 나타내며, 이는 프로그램이 종료될 때 어떤 값도 반환하지 않는 것을 의미한다.
// 따라서 void 반환형을 사용하는 것은 C언어에서 권장되는 방식이다. 이느 프로그램이 종료될 때 반환되는 값이 없기 때문에 오류가 발생할 가능성이 줄어든다. 또한 main 함수가 반환되는 값을 사용하는 경우는 드물기 때문에 void인 main 함수는 일반적으로 프로그램의 실행에 아무런 문제가 없다.

// 01 예제 함수의 필요성

//#include <stdio.h>
//
//void PrintHello() { // 함수의 헤더(선언부)
//	int n = 0;		// 함수의 본체(정의부)
//	printf("반복횟수를 입력하세요 >>> ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Hello world!\n");
//	}
//}
//
//int main()
//{
//	PrintHello(); // 함수 호출
//	PrintHello(); // 함수 호출
//}

// 02 함수의 형태 확인

//int sum1(int x, int y) {
//	return x + y;
//}
//int sum2()
//{
//	printf("두 수를 입력하세요 >>> ");
//	int x = 0, y = 0;
//	scanf_s("%d%d", &x, & y);
//	return x + y;
//}
//int sum3(int x, int y)
//{
//	printf("sum3(%d,%d) = %d\n", x, y, x + y);
//}
//int sum4()
//{
//	int x = 0, y = 0;
//	printf("두 수 입력 : ");
//	scanf_s("%d%d", &x, &y);
//	printf("두 수의 합 : %d\n", x + y);
//}
//
//int main()
//{
//	int n1 = sum1(100, 300);
//	printf("sum1은 %d다\n", n1);
//	int n2 = sum2();
//	printf("sum2은 %d다\n", n2);
//	sum3(1000, 2000);
//	sum4();
//}

// 함수 호출(function call)
// 1. 함수를 사용하기 위하여 함수의 이름을 적어주는것
// 2. 함수안의 문장들이 순차적으로 실행된다.
// 3. 문장의 실행이 끝나면 호출한 위치로 되돌아간다.
// 4. 결과값을 전달할 수 있다.

// 인수와 매개변수
// 인수(argument) : C언어에서 함수를 호출할 때 인수(argment)를 전달할 수 있다. 함수 인수는 함수 호출 시 괄호 안에 쉼표로 구분하여 전달
// 함수 인수를 사용하면 함수가 실행될 때 함수 내부에서 인수를 참조할 수 있다.

// 매개변수(parameter) : 함수 선언부나 정의부에서 함수가 호출될 때 전달되는 값을 저장하기 위한 변수. 매개변수는 함수 내에서 지역 변수와 마찬가지로 사용되며, 함수 호출 시에 전달된 인수(argument)값이 저장된다.

//int add(int a, int b) { // int a,b는 함수에 전달되는 인수 값을 저장하기 위한 변수 이름이다. 매개변수의 데이터 타입과 변수 이름사이에는 쉼표로 구분한다.
//	int sum = a + b;
//
//	return sum;
//
//}
//int main()
//{
//	// 7과 8이 add() 인수가 된다.
//	int result = add(7, 8); // 함수를 호출한다.
//	
//	
//}

//문제 : 다음 조건을 만족하는 함수를 만드세요
//반환 자료형은 :int
//함수명 : sum
//매개변수 : 4개의 정수값을 다른 함수로부터(main) 전달 받음
//내부로직
// -짝수는 짝수끼리 합출력
// -홀수는 홀수끼리 합출력
// -전달받은 모든 수의 합을 return 한 후 result라는 변수에 담아 printf를 써서 출력하시오.




//int main()
//{
//	int result = sum(10, 11, 20, 21);
//	printf("result = %d\n", result);
//	
//}
//
//
//
//
//
//
//int sum(int w, int x, int y, int z)
//{
//	int oddsum = 0, evensum = 0;
//
//	if (w % 2 == 1) 
//	{ 
//		oddsum += w; 
//	}
//	else 
//	{ 
//		evensum += w; 
//	}
//	if (x % 2 == 1) { oddsum += x; }
//	else { evensum += x; }
//	if (y % 2 == 1) { oddsum += y; }
//	else { evensum += y; }
//	if (z % 2 == 1) { oddsum += z; }
//	else { evensum += z; }
//
//	printf("짝수 합 : %d\n", evensum);
//	printf("홀수 합 : %d\n", oddsum);
//	return x + y + z + w;
//}