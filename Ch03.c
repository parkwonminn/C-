//(�ڷ�)����ȯ

//�ڵ�����ȯ(�Ͻ�������ȯ) : �����Ϸ��� ���� �ڵ�����ȯ
//��������ȯ(���������ȯ) : ���α׷���(������)�� ���� ��������ȯ

// 01 �ڵ�����ȯ
// �ڷ��� ��ȯ�� ������ �ս� ���ɼ��� ���� �� �����Ϸ�(��ǻ��,C������α׷�)

// �ڵ�����ȯ ����
// char < short < int < long < long long < float < double

//#include <stdio.h>
//int main()
//{
//	short svar = 10;
//	int ivar = svar; 
//	printf("ivar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar; // �ڵ�����ȯ
//	printf("ivar = %d\n", ivar);
//
//	long long lvar = ivar;
//	printf("lvar = %d\n", lvar); // (����) �ڵ�����ȯ
//
//	float fvar = lvar;
//	printf("fvar = %f\n", fvar); // %d : ���������� �޴´�. %f : �Ǽ��� ������ �޴´�.
//}

// 02 ��������ȯ
// ���α׷��ӿ� ���� Ư���� �ڷ������� ���� ����ȯ ��Ű�� ���
// ���� : ������ �ս� ���ɼ��� ����.

//#include <stdio.h>
//int main()
//{
//	// int : -21�� ~ +21�� , short : �� -32000 ~ + 32000
//	int ivar = 50000;
//	short svar = (short)ivar;
//	char cvar = (char)ivar;
//	printf("svar = %d\n", svar);
//	printf("cvar = %d\n", cvar);
//}

// 03 ����� �ڵ�(����) ����ȯ (������)

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