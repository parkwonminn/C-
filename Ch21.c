// void

// void�� ����ִ�, �Ǵ� �ƹ� �͵� ���� �ǹ̸� ������, �Լ��� �����͸� ������ �� ����Ѵ�.

// 1. �Լ��μ��� void
// 2. �����ͷμ��� void

// 1. �Լ��� ��ȯ������ void �� ����ϸ�, �ش� �Լ��� ��ȯ���� ���ٴ� ���� ��Ÿ����.

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

// 2. �����ͷμ��� void

// �����͸� ������ �� ������ Ÿ������ void�� ����ϸ� � ������ Ÿ���� �޸� �ּҵ� ������ ������ �Ҵ��� �� �ִ�.

// void �����ʹ� ������ ������ �Ұ���. �׷��� �ش� �޸��� ������ �аų� ���� ���ؼ��� ������ ������ Ÿ������ ĳ����(����ȯ) ���־�� �Ѵ�.

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

// Static ����

// static �̶�� Ű���带 ����Ͽ� static ������ ������ �� �ִ�. static�� ���� ������ ���� ������ ��� ���� ����.
// ���� ������ �Ϻ� �������ִ� ��Ȱ�� �Ѵ�.

#include <stdio.h>

// static�� ������� ���� �� : ����� ���� ������ ������ �Ҹ��� �ݺ�.

// static�� ����� �� :static������ ������ ����� ���� ������ ������ �Ҹ��� �ݺ�

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


// �迭�� ���޹޴� �Լ��� ����

// �迭�� ���� ���� �����͸� �ϳ��� ������ �����ϱ� ���� ����ϴ� �ڷ���
// �Լ����� �迭�� ���޹��� ���� �迭�� �̸��� �״�� �Լ��� ���ڷ� �����Ѵ�.
// �� �� �迭�� �̸��� 'ù ���� ����� �ּҸ� ��Ÿ����.' �Լ������� ���޹���
// �迭�� ù ��° ��Ҹ� ����Ű�� ������ ������ �����Ͽ� ����Ѵ�.

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

// Call-by-value : ���� ���� ȣ��
// �Լ� ȣ�� �� ���ڷ� ���޵Ǵ� ���� ����Ǿ� �Լ� ���η� ���޵ȴ�.
// �Լ� ���ο��� ���ڰ��� ����Ǿ, �Լ��� ȣ���� �������� ���� X

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

// Call-by-reference (������ ���� ȣ��)
// �Լ� ȣ�� �� ���ڷ� ���޵Ǵ� ���� �ּҰ� �Լ� ���η� ���޵ȴ�.
// �Լ� ���ο��� ���� ���� ����Ǹ�, �Լ��� ȣ���� �������� ������ �޴´�.

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

// ��� : ���� �ڱ� �ڸ��� ����. ȸ���ϴ�.
// ����Լ� : �Լ� ������ �ٽ� �ڱ� �ڽ��� ȣ���Ѵ�.

// ���丮�� �Լ�, �Ǻ���ġ �Լ�

// ���丮�� : �ڱ⸦ �����ؼ� �ϳ��� ���� ���� ���ذ��鼭 1���� ���� ������ ��

//5 = 5 x 4 x 3 x 2 x 1
//4 = 4 x 3 x 2 x 1

 //���丮�� �Լ�
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

// ���� 

// �ڿ��� n�� �Է¹޾� 1���� n������ ���� ���ϴ� 'sum'�� ��� ȣ��� ����

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
//	printf("1���� %d������ �� = %d\n", n, result);
//}

// sum(5) = 5 + sum(4)
//		  = 5 + (4 + sum(3))
//		  = 5 + (4 + (3 + sum(2))))
//		  = 5 + (4 + (3 + (2 + sum(1))))
//		  = 5 + (4 + (3 + (2 + 1)))
//		  = 15