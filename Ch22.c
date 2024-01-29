#include <stdio.h>
// 포인터의 포인터

// 포인터의 포인터란 포인터 변수를 가리키는 또 다른 변수를 의미하며 더블 포인터, 혹은 이중포인터 라고도 한다.

// 포인터 변수 : 메모리의 주소값을 저장하는 변수. 포인터 변수 또한 하나의 변수이므로 필요한 메모리 공간을 할당받아 사용하고 있다. 따라서 포인터 변수가 차지하고 있는 메모리공간에 대한 주소값을 저장하는것이 가능하다.
// 이를 저장하는 변수를 두고 포인터의 포인터를 저장한다고 하여 더블 포인터 라고 한다.

// 싱글포인터 : 기본적인 포인터의 개념

//int x = 10;
//int* p = &x; // p는 x의 주소값을 가리키는 포인터이다.

// 더블 포인터 : 포인터를 저장하는 변수. 해당 포인터가 가리키는 메모리 주소를 참조하여 값을 읽거나 쓸 수 있다. 다시 말해 더블 포인터는 포인터를 가리키는 포인터이다.

//int x = 10;
//int* p = &x; // p는 x의 주소값을 가리키는 포인터이다.
//int** q = &p; // q는 p의 주소값을 가리키는 포인터
//
//**q = 20; // x의 값을 20으로 변경

// 더블 포인터를 이용하여 배열에서 최솟값을 찾는 함수 구현


//void findMin(int** arr, int size, int* result)
//{
//	*result = **arr; // 최솟값을 저장할 변수를 첫 번째 요소로 초기화
//	for (int i = 1; i < size; i++)
//	{
//		if (*(*arr + i) < *result)
//		{
//			*result = *(*arr + i);
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,2,8,3,7 };
//	int* ptr = arr;
//	int** doubleptr = &ptr;
//	int size = sizeof(arr) / sizeof(arr[0]); // 배열의 크기를 계산
//	int min; // 최솟값을 저장할 변수를 선언
//	findMin(doubleptr, size, &min);
//	printf("배열에서 최솟값은 %d입니다.\n", min);
//}

//int main()
//{
//	int num = 3;
//	int* ptr1 = &num;
//	int** dptr = &ptr1;
//	int* ptr2;
//
//	printf("%p %p\n", ptr1, dptr);
//	printf("%d %d\n", num, **dptr);
//
//	ptr2 = *dptr; // dptr1이 가리키는 ptr1의 값을 ptr2에 대입 ptr2는 num의 주소를 가리킨다.
//
//	*ptr2 = 9; // pt2가 가리키는 변수에 9를 저장. 변수는 num의 값이 바뀐다.
//	printf("%d %d %d\n", num, **dptr, *ptr2);
//}

//void swap(int** a, int** b) {
//	int temp = **a;
//	**a = **b;
//	**b = temp;
//}
//
//int main()
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	printf("바뀌기 전 : \n");
//	printf("num1 = %d, num2 = %d\n", num1, num2);
//
//	swap(&ptr1, &ptr2);
//
//	printf("바뀐 후 : \n");
//	printf("num1 = %d, num2 = %d\n", num1, num2);
//}

// 문제 더블 포인터를 사용하여 문자열을 역순으로 출력한다.

#include <stdio.h>
//#include <string.h>
//
//printReverse(char** str) {
//	int len = strlen(*str);
//	for (int i = len; i >= 0; i--)
//	{
//		printf("%c", *(*str + i));
//	}
//}
//
//
//int main()
//{
//	char* str = "hello world!";
//	printReverse(&str);
//	return 0;
//}
// 힌트 : strlen이 뭔지 찾아보시오. , for문 사용 -> 

// 더블포인터와 Call-by-reference

// 두 방법 모두 함수 호출 시, 인수로 전달된 변수의 값을 변경할 수 있다.
// 그러나 더블 포인터는 포인터 변수를 가리키는 포인터를 다루는 것에 비해
// Call-by-reference는 변수의 주소를 전달하는 것이다. 그래서 더 간단하고 직관적인 방법
// 더블 포인터는 필요한 경우에만 사용하는 것이 좋다.


// 함수 포인터

// 함수 포인터 : 함수의 주소를 저장하기 위한 포인터를 의미한다. 함수 포인터를 이용하면
// 함수를 가리키는 포인터를 선언하고 이를 이용하여 함수를 호출할 수 있다.

//예 : 

//int (*fp)(int);

// 리턴타입 (*포인터이름)(매개변수);
// 포인터이름 = 함수이름
// 매개변수 = 매개변수 타입

//int square(int num) {
//	return num * num;
//}
//
//int main()
//{
//	int (*fp)(int);
//	// fp 라는 함수 포인터를 선언
//	fp = square;
//	// square 함수의 주소를 fp에 저장한다.
//
//	printf("square(5) = %d\n", square(5));
//	printf("(*fp)(5) = %d\n", (*fp)(5));


