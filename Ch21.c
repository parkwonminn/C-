// void

// void는 비어있는, 또는 아무 것도 없는 의미를 가지며, 함수나 포인터를 정의할 때 사용한다.

// 1. 함수로서의 void
// 2. 포인터로서의 void

// 1. 함수의 반환형으로 void 를 사용하면, 해당 함수는 반환값이 없다는 것을 나타낸다.

//#include <stdio.h>
//
//void helloWorld()
//{
//	printf("Hello world!\n");
//
//}
//
//int main()
//{
//	helloWorld();
//
//}

// 2. 포인터로서의 void

// 포인터를 선언할 때 데이터 타입으로 void를 사용하면 어떤 데이터 타입의 메모리 주소든 포인터 변수에 할당할 수 있다.

// void 포인터는 포인터 연산이 불가능. 그래서 해당 메모리의 내용을 읽거나 쓰기 위해서는 적절한 데이터 타입으로 캐스팅(형변환) 해주어야 한다.

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	float fnum = 3.14;
//
//	void* ptr;
//	ptr = &num;
//	printf("num = %d\n", *(int *)ptr);
//
//	ptr = &fnum;
//	printf("fnum = %f\n", *(float*)ptr);
//}

// Static 변수

// static 이라는 키워드를 사용하여 static 변수를 선언할 수 있다. static은 전역 변수와 지역 변수에 모두 선언 가능.
// 지역 변수를 일부 보완해주는 역활을 한다.

#include <stdio.h>

// static을 사용하지 않을 때 : 선언된 지역 내에서 생성과 소멸을 반복.

// static을 사용할 때 :static변수를 제외한 선언된 지역 내에서 생성과 소멸을 반복

//void test()
//{
//	static int count = 0;
//	count++;
//	printf("Count = %d\n", count);
//}
//
//
//int main()
//{
//	test();
//	test();
//	test();
//}


// 배열을 전달받는 함수에 대해

// 배열은 여러 개의 데이터를 하나의 변수에 저장하기 위해 사용하는 자료형
// 함수에서 배열을 전달받을 때는 배열의 이름을 그대로 함수에 인자로 전달한다.
// 이 때 배열의 이름은 '첫 번재 요소의 주소를 나타낸다.' 함수에서는 전달받은
// 배열의 첫 번째 요소를 가리키는 포인터 변수를 선언하여 사용한다.

//#include <stdio.h>
//
//void printArray(int * arr,int size) {
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printArray(arr, 5);
//}

// Call-by-value, Call-by-reference

// Call-by-value : 값에 의한 호출
// 함수 호출 시 인자로 전달되는 값이 복사되어 함수 내부로 전달된다.
// 함수 내부에서 인자값이 변경되어도, 함수를 호출한 곳에서는 영향 X

//#include <stdio.h>
//void swap(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(a, b);
//	printf("a = %d, b = %d\n", a, b);
//}

// Call-by-reference (참조에 의한 호출)
// 함수 호출 시 인자로 전달되는 값의 주소가 함수 내부로 전달된다.
// 함수 내부에서 인자 값이 변경되면, 함수를 호출한 곳에서도 영향을 받는다.

//#include <stdio.h>
//void swap(int *x, int *y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp; 
//}
//
//
//int main()
//{
//	int a = 10, b = 20;
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//}

// 재귀 : 원래 자기 자리로 가다. 회귀하다.
// 재귀함수 : 함수 내에서 다시 자기 자신을 호출한다.

// 팩토리얼 함수, 피보나치 함수

// 팩토리얼 : 자기를 포함해서 하나씩 작은 수를 곱해가면서 1까지 곱해 나가는 것

//5 = 5 x 4 x 3 x 2 x 1
//4 = 4 x 3 x 2 x 1

 //팩토리얼 함수
//#include <stdio.h>
//int factorial(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//int main()
//{
//	int n = 100;
//	int result = factorial(n);
//	printf("%d = %d\n", n, result);
//}

//int fibo(int n) {
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return fibo(n - 1) + fibo(n - 2);
//}
//
//int main()
//{
//	int n = 5;
//	printf("%d", fibo(n));
//}

// 문제 

// 자연수 n을 입력받아 1부터 n까지의 합을 구하는 'sum'을 재귀 호출로 구현

//#include <stdio.h>
//int sum(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	else {
//		return n + sum(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 5;
//	int result = sum(n);
//	printf("1부터 %d까지의 합 = %d\n", n, result);
//}

// sum(5) = 5 + sum(4)
//		  = 5 + (4 + sum(3))
//		  = 5 + (4 + (3 + sum(2))))
//		  = 5 + (4 + (3 + (2 + sum(1))))
//		  = 5 + (4 + (3 + (2 + 1)))
//		  = 15