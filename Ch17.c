//#include <stdio.h>
//// ������ �迭�� ����
//
//// ������ �迭�� 2���� �̻��� �迭�� �ǹ��Ѵ�. 1���� �迭���� ������ �ٸ���.
//// ���������� ����ϴ� �迭�� 2����,3���� �迭�̴�.
//
////int arr1[10]; // ���α��̰� 10�� 1���� �迭
////int arr2[5][3] // ���� ���̰� 5, ���α��̰� 3�� 2�����迭
////int arr3[2][3][4] // ���̰�2 ���α��̰�3 ���α��̰� 4�� 3�����迭
//
////int main()
////{
////	int arr[2][3] =
////	{
////		{1,2,3} ,{4,5,6}
////	};
////	//�迭�� ��� ��� ���
////	for (int i = 0; i < 2; i++)
////	{
////		for (int j = 0; j < 3; j++)
////		{
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////	// �迭�� ��ڰ��� ��� 10���� ����
////	for (int i = 0; i < 2; i++)
////	{
////		for (int j = 0; j < 3; j++)
////		{
////			arr[i][j] = 10;
////		}
////	}
////	// �ٽ� �迭�� ��� ��� ���
////	for (int i = 0; i < 2; i++)
////	{
////		for (int j = 0; j < 3; j++)
////		{
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////}
//
//// ������ �迭 �μ�
//
//
//// #define C���� ��ó���� ���ù��̴�. ������ ���� ������ �����Ǹ� �ַ� ���, ��ũ�� �Լ� ���� �����ϴµ� ����Ѵ�.
////#define years 3		
////#define products 5
////
////int sum(int grade[][products])
////{
////	int total = 0;
////	for (int i = 0; i < years; i++)
////	{
////		for (int j = 0; j < products; j++)
////		{
////			total += grade[i][j];
////		}
////	}
////	return total;
////}
////
////int main()
////{
////	int sales[years][products] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
////	int total_sale;
////	total_sale = sum(sales);
////	printf("�� ������ %d �Դϴ�.", total_sale);
////}
//
//
//// ���� : �� �б��� 3���̸� �� �л����� �� �ݸ��� 5�� �ֽ��ϴ�.
//// �� �л����� ������ 0�� ~ 14������ �ֽ��ϴ�. 
//// �б��� ��ռ����� �̰�, ��ü �л����� ��ռ����� �̾ƺ��ÿ�.
//
////#define Class 3
////#define Students 5
////
////int main()
////{
////	int s[Class][Students] = {
////		{0,1,2,3,4},
////		{5,6,7,8,9},
////		{10,11,12,13,14}
////	};
////	int total_avg = 0;
////	for (int i = 0; i < Class; i++)
////	{
////		int avg = 0;
////		for (int j = 0; j < Students; j++)
////		{
////			avg += s[i][j];
////		}
////		printf("�б� %d�� ��� ���� = %d\n", i + 1, avg / Students);
////		total_avg += avg;
////	}
////	printf("��ü �л����� ��� ���� = %d\n", total_avg / (Class * Students));
////}
//
//// ����2 : Max_size�� 10�� �迭�� �ֽ��ϴ�. �� �迭 �ȿ��� 1~10�������� �����͸� ��� �ֽ��ϴ�. 
//
//// �迭 array���ٰ� 1~10������ ���� ��� ����� �غ��ÿ�.
//
////#define Max_size 10
////
////int main()
////{
////	int array[Max_size];
////
////	for (int i = 0; i < 10; i++)
////	{
////		array[i] = i + 1;
////	}
////	for (int i = 0; i < 10; i++)
////	{
////		printf("%d\n", array[i]);
////	}
////}
//
//
//
//
//
//
//
//#include <stdio.h>
//
//#define ROWS 3
//#define COLS 4
//
//int main()
//{
//	int matrix[ROWS][COLS]; 
//
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			matrix[i][j] = i * COLS + j + 1;
//		}
//	}
//
//	// 2���� �迭�� �̿��Ͽ� ������ ���
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}