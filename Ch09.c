// 01 break;
// �ݺ��� Ż�⿡ ��� or switch�� caseŻ�⿡ ���

//#include <stdio.h>
//int main()
//{
//	int temp = 0;
//	int sum = 0;
//	while (1)
//	{
//		printf("�� �Է� >>> (���� -1�� ������ ����)");
//		scanf_s("%d", &temp);
//		if (temp == -1)
//		{
//			break;
//		}
//		sum += temp; 
//	}
//	printf("���� �� : %d\n", sum);
//}

//02 ��ø while�� ��ü �����
// 5 x 5 = 25 ������ ����ϱ� ������ ��� X
// flag�� + if �̿��ؼ� �����

//#include <stdio.h>
//int main()
//{
//	int dan = 2;
//	int i = 1;
//	int flag = 0; // �ݺ��߿� ����ϴ� ��
//	while (dan <= 9)
//	{
//		i = 1;
//		while (i <= 9)
//		{
//			printf("%d x %d = %d\n", dan, i, dan * i);
//			if (dan == 5 && i == 5)
//			{
//				flag = 1;
//				break;
//			}
//			i++;
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		dan++;
//	}
//}

//03 continue;
// continue�� C���� �����ϴ� ��� �� �ϳ��� �ݺ������� ���ȴ�. continue�� ������ ���� �������� �ݺ����� ������ �κ��� �ǳʶٰ�, ���� �ݺ��� �����Ѵ�.


// 1���� 10������ �� �߿� 3�� ����� �����ϰ� ���
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i % 3 == 0)
//		{
//			i++;
//			continue;
//		}
//		printf("i = %d\n", i);
//		i++;
//	}
//}

// ���� :

// while������ continue�� break���� ����Ͽ� 1���� 100������ �� �߿��� 
// 5�� ����� ���ϰ�, 50�� �Ѿ�� �ݺ����� �ߴ��Ͻÿ�.

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 5 != 0)
//		{
//			i++;
//			continue;
//		}
//		sum += i;
//		printf("%d\n", i);
//		printf("���� ��(while��)%d\n", sum);
//		if (sum > 50)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("���� �� : %d\n", sum);
//}