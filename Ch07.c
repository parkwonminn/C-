// 01 Switch문(다중분기)
// 프로그래밍에서 조건문 중 하나로, 조건에 따라 다른 코드를 실행할 때 사용된다.
// switch문에서는 하나의 변수에 대해 여러가지 조건을 나열하여 각 조건마다 실행할 코드를 지정한다.

// switch문의 구조
//switch (변수)
//{
//case 값1:
//	실행할 코드 1;
//	break;
// 
//case 값2:
//	실행할 코드 2;
//	break;
// 
//default:
//	break;
//}

// case : if문이면서 else if문이기도 하다
// break : 해당 코드를 실행하고 나서 멈추게 만든다.
// default : else문이다.(case에 대한 실행값이 아무것도 맞지 않을 시)

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 입력시 실행되는 코드 블럭\n");
//		break;
//	case 2:
//		printf("2 입력시 실행되는 코드 블럭\n");
//		break;
//	case 3:
//		printf("3 입력시 실행되는 코드 블럭\n");
//		break;
//	case 4:
//		printf("4 입력시 실행되는 코드 블럭\n");
//		break;
//	default:
//		printf("그 외 나머지 입력시 실행되는 코드 블럭\n");
//		break;
//	}
//}

// 문제 : 1 ~ 12월까지 마지막 날짜를 switch문을 돌려서 나오게끔 만들어 보십시요.
// 단 1~12 이외의 숫자가 나올 시 잘못된 입력입니다. 가 나오도록 하시오.

//#include <stdio.h>
//
//int main() {
//    int month = 0;
//
//    printf("1부터 12까지의 숫자를 입력하세요: ");
//    scanf_s("%d", &month);
//
//    switch (month) {
//    case 1:
//        printf("1월: 31일\n");
//        break;
//    case 2:
//        printf("2월: 28일\n");
//        break;
//    case 3:
//        printf("3월: 31일\n");
//        break;
//    case 4:
//        printf("4월: 30일\n");
//        break;
//    case 5:
//        printf("5월: 31일\n");
//        break;
//    case 6:
//        printf("6월: 30일\n");
//        break;
//    case 7:
//        printf("7월: 31일\n");
//        break;
//    case 8:
//        printf("8월: 31일\n");
//        break;
//    case 9:
//        printf("9월: 30일\n");
//        break;
//    case 10:
//        printf("10월: 31일\n");
//        break;
//    case 11:
//        printf("11월: 30일\n");
//        break;
//    case 12:
//        printf("12월: 31일\n");
//        break;
//    default:
//        printf("잘못된 입력입니다.\n");
//        break;
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num1, num2, num3;
//	printf("세 개의 숫자를 입력하세요 >>> ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			printf("num1이 가장 큽니다.");
//		}
//		else
//		{
//			printf("num3이 가장 큽니다.");
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			printf("num2가 가장 큽니다.");
//		}
//		else
//		{
//			printf("num3이 가장 큽니다.");
//		}
//	}
//}

