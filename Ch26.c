////typedef ������ ������ �����ϴ� �ڷ����� �� �̸��� �ο��ϴ� ������ ������ ������ �ڷ��� ������ �����ϰ� ���ش�.
//
////typedef int myint;
//
////myint �� int�� ������ ���� ������ Ÿ������ ����Ѵ�. int�� ���� �� �ִ� ��� ������ myint�� ��� ����.
//
//#include <stdio.h>
//
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//
////int main()
////{
////	// ���� ������ ����� �ڷ��� �̸��� ���� ����
////	typedef char CHAR;
////	typedef char* STR;
////
////	//typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ��Ȱ ����
////	INT num = 3;
////	PINT ptr = &num;
////	UINT unum = 5;
////
////	CHAR ch = 'c';
////	STR str = "Hello";
////
////	printf("%d %d %d\n", num, *ptr, unum);
////}
//
//typedef struct {
//	int x;
//	int y;
//}Point;
//
//////typedef Ű���带 ����Ͽ� struct {int x; int y; ��� ����ü�� Point��� ���ο� ������ Ÿ������ ����. ���� Point�� ����ü�� ������ ����� �����ϸ�, ��ǥ ���� �����ϴ� �뵵�� ���
////
////int main()
////{
////	Point p = { 3,4 };
////	printf("%d %d,", p.x, p.y);
////}
//
////Point�� ������ �����ϰ� �ʱ�ȭ�ϰ� ����ϴ� �ڵ�
//// p ������ Point ������ Ÿ������ ����Ǿ� ������, �ʱⰪ���� {3,4}�� �Ҵ��Ѵ�.
//
////struct person
////{
////	char name[30];
////	int age;
////};
////
////typedef struct person PERSON;
////
////int main()
////{
////	Point position = { 30,60 };
////	PERSON human = { "�ڸ���",15 };
////	printf("%d %d\n", position.x, position.y);
////	printf("%s %d\n", human.name, human.age);
////}
//
//// ���� ������ ���� ����ü�� ���� ��,
//
//#include <stdio.h>
//typedef struct{
//	int id;
//	char name[50];
//	int age;
//	float height;
//
//}Student;
//
//
////1. Person ����ü�� ����� 3���� ��� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷� �ۼ�
//
//int main()
//{
//	Student student[3] = {
//		{1,"�ڸ���",25,165.5},
//		{2,"IT",30,180.0},
//		{3,"�뱸",20,185.5}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�й� : %d\n", student[i].id);
//		printf("�̸� : %s\n", student[i].name);
//		printf("���� : %d\n", student[i].age);
//		printf("Ű : %.1f\n", student[i].height);
//	}
//}
//
//
////2. Person ����ü�� ������ �м� ������ �����ϴ� ����ü�� ���� -> �л��� �й�('id')������ �߰��� ������.
//// �� �� 3���� �л� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷� �����