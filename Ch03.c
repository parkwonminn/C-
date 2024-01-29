//(자료)형변환

//자동형변환(암시적형변환) : 컴파일러에 의해 자동형변환
//강제형변환(명시적형변환) : 프로그래머(개발자)에 의한 강제형변환

// 01 자동현변환
// 자료형 변환시 데이터 손실 가능성이 낮을 때 컴파일러(컴퓨터,C언어프로그램)

// 자동형변환 순서
// char < short < int < long < long long < float < double

//#include <stdio.h>
//int main()
//{
//	short svar = 10;
//	int ivar = svar; 
//	printf("ivar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar; // 자동형변환
//	printf("ivar = %d\n", ivar);
//
//	long long lvar = ivar;
//	printf("lvar = %d\n", lvar); // (주의) 자동형변환
//
//	float fvar = lvar;
//	printf("fvar = %f\n", fvar); // %d : 정수서식을 받는다. %f : 실수형 서식을 받는다.
//}

// 02 강제형변환
// 프로그래머에 의해 특정한 자료형으로 강제 형변환 시키는 경우
// 단점 : 데이터 손실 가능성이 높다.

//#include <stdio.h>
//int main()
//{
//	// int : -21억 ~ +21억 , short : 약 -32000 ~ + 32000
//	int ivar = 50000;
//	short svar = (short)ivar;
//	char cvar = (char)ivar;
//	printf("svar = %d\n", svar);
//	printf("cvar = %d\n", cvar);
//}

// 03 연산시 자동(강제) 형변환 (나눗셈)

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	double r2 = (float)num / div;
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//}