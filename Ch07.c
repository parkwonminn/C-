// 01 Switch��(���ߺб�)
// ���α׷��ֿ��� ���ǹ� �� �ϳ���, ���ǿ� ���� �ٸ� �ڵ带 ������ �� ���ȴ�.
// switch�������� �ϳ��� ������ ���� �������� ������ �����Ͽ� �� ���Ǹ��� ������ �ڵ带 �����Ѵ�.

// switch���� ����
//switch (����)
//{
//case ��1:
//	������ �ڵ� 1;
//	break;
// 
//case ��2:
//	������ �ڵ� 2;
//	break;
// 
//default:
//	break;
//}

// case : if���̸鼭 else if���̱⵵ �ϴ�
// break : �ش� �ڵ带 �����ϰ� ���� ���߰� �����.
// default : else���̴�.(case�� ���� ���ప�� �ƹ��͵� ���� ���� ��)

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	case 2:
//		printf("2 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	case 3:
//		printf("3 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	case 4:
//		printf("4 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	default:
//		printf("�� �� ������ �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	}
//}

// ���� : 1 ~ 12������ ������ ��¥�� switch���� ������ �����Բ� ����� ���ʽÿ�.
// �� 1~12 �̿��� ���ڰ� ���� �� �߸��� �Է��Դϴ�. �� �������� �Ͻÿ�.

//#include <stdio.h>
//
//int main() {
//    int month = 0;
//
//    printf("1���� 12������ ���ڸ� �Է��ϼ���: ");
//    scanf_s("%d", &month);
//
//    switch (month) {
//    case 1:
//        printf("1��: 31��\n");
//        break;
//    case 2:
//        printf("2��: 28��\n");
//        break;
//    case 3:
//        printf("3��: 31��\n");
//        break;
//    case 4:
//        printf("4��: 30��\n");
//        break;
//    case 5:
//        printf("5��: 31��\n");
//        break;
//    case 6:
//        printf("6��: 30��\n");
//        break;
//    case 7:
//        printf("7��: 31��\n");
//        break;
//    case 8:
//        printf("8��: 31��\n");
//        break;
//    case 9:
//        printf("9��: 30��\n");
//        break;
//    case 10:
//        printf("10��: 31��\n");
//        break;
//    case 11:
//        printf("11��: 30��\n");
//        break;
//    case 12:
//        printf("12��: 31��\n");
//        break;
//    default:
//        printf("�߸��� �Է��Դϴ�.\n");
//        break;
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num1, num2, num3;
//	printf("�� ���� ���ڸ� �Է��ϼ��� >>> ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			printf("num1�� ���� Ů�ϴ�.");
//		}
//		else
//		{
//			printf("num3�� ���� Ů�ϴ�.");
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			printf("num2�� ���� Ů�ϴ�.");
//		}
//		else
//		{
//			printf("num3�� ���� Ů�ϴ�.");
//		}
//	}
//}

