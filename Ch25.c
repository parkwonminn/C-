// ����ü

// ����ü -> �ڹ��� Ŭ����, ���̽��� Ŭ���� , C++;

// ����ü  :�ϳ� �̻��� ������ �Ѳ����� ��� ����� '���ο� ������ �ڷ���'
// ����ü�� �����ϴ� �� ������ ������ �޸� ������ �Ҵ������, �̰͵��� ����ü�� ���� �־� ��� �ϳ��� ������ ǥ���ϴ� ����ü ����μ� ��Ȱ�� �����Ѵ�.

// ����ü�� ������ ���� �������� ���ǵȴ�.

//struct ����ü �̸�;
//{
//	������ Ÿ�� ���1 �̸�;
//	������ Ÿ�� ���2 �̸�;
//};

// ����ü �̸��� ���� ������� ����ü�� �̸��̸�, ����̸��� ����ü ���ο� �ִ� �������� �̸��̴�.

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//
//// ����ü�� ������ ���� ������ ���� �������� �����ϸ鼭 �����Ѵ�.
//struct Person p1; //Person ����ü Ÿ���� ���� p1 ����
//
//// p1 ������ Person ����ü�� ����� name, age, height ���� ������ �ȴ�. �� ����鿡 ������ ���� .�����ڸ� ���
//
//strcpy(p1.name, "john");

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996);

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};

//int main()
//{
//	struct Person p1; // Person ����ü Ÿ���� ���� p1 ����
//	strcpy(p1.name, "Koreait");
//	p1.age = 25;
//	p1.height = 175.5;
//
//	printf("name : %s\n", p1.name);
//	printf("age : %d\n", p1.age);
//	printf("height : %.1f\n", p1.height);
//
//	struct Person people[3];
//
//	strcpy(people[0].name, "�ڸ���");
//	people[0].age = 30;
//	people[0].height = 180.0;
//
//	strcpy(people[1].name, "IT");
//	people[1].age = 30;
//	people[1].height = 180.0;
//
//	strcpy(people[2].name, "�뱸");
//	people[2].age = 30;
//	people[2].height = 180.0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("\nname : %s\n", people[i].name);
//		printf("age : %d\n", people[i].age);
//		printf("height : %.1f\n\n", people[i].height);
//	}
//}

//struct person
//{
//	char name[30];
//	int age;
//};
//
//int main()
//{
//	// ����ü ���� ����� ���ÿ� �ʱ�ȭ
//	struct person boy = { "��ҳ�",12 };
//	struct person girl = { "�̼ҳ�",9 };
//
//	printf("�ҳ��� �̸��� %s�̰� ���̴� %d�Դϴ�.\n", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s�̰� ���̴� %d�Դϴ�.\n", girl.name, girl.age);
//}

// ���� : ����ü student ���� �л��� �̸�, �й�, ������ �ֽ��ϴ�.
// ����ü�� ����Ͽ� �̸�,�й�,������ �����ÿ�.

//#include <stdio.h>
//
//struct student {
//	char name[20];
//	int id;
//	float score;
//};
//
//int main()
//{
//	struct student stu = { "�л�1",1,100.00 };
//	printf("�Է��� �л� ����\n");
//	printf("�̸� : %s\n", stu.name);
//	printf("�й� : %d\n", stu.id);
//	printf("���� : %f\n", stu.score);
//}


//#include <stdio.h>
//
//struct student {
//    char name[20];
//    int id;
//    float score;
//};
//
//void clearInputBuffer() {
//    while (getchar() != '\n'); // �Է� ���� ����
//}
//
//int main()
//{
//    struct student stu;
//
//    printf("�л� ������ �Է��ϼ���.\n");
//
//    printf("�̸�: ");
//    fgets(stu.name, 20, stdin);  
//    stu.name[strcspn(stu.name, "\n")] = 0; // �ٹٲ� ���� ����
//
//    printf("�й�: ");
//    scanf_s("%d", &stu.id);
//    clearInputBuffer();
//
//    printf("����: ");
//    scanf_s("%f", &stu.score);
//    clearInputBuffer();
//
//    printf("\n�Է��� �л� ����\n");
//    printf("�̸� : %s\n", stu.name);
//    printf("�й� : %d\n", stu.id);
//    printf("���� : %.1f\n", stu.score);
//
//    return 0;
//}

