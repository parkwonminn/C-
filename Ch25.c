// 구조체

// 구조체 -> 자바의 클래스, 파이썬의 클래스 , C++;

// 구조체  :하나 이상의 변수를 한꺼번에 묶어서 만드는 '새로운 유형의 자료형'
// 구조체를 구성하는 각 변수는 각각의 메모리 공간을 할당받지만, 이것들은 구조체에 속해 있어 모두 하나의 정보를 표현하는 구조체 멤버로서 역활을 수행한다.

// 구조체는 다음과 같은 형식으로 정의된다.

//struct 구조체 이름;
//{
//	데이터 타입 멤버1 이름;
//	데이터 타입 멤버2 이름;
//};

// 구조체 이름은 새로 만들어질 구조체의 이름이며, 멤버이름은 구조체 내부에 있는 변수들의 이름이다.

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//
//// 구조체를 선언할 때는 다음과 같이 변수명을 지정하면서 선언한다.
//struct Person p1; //Person 구조체 타입의 변수 p1 선언
//
//// p1 변수는 Person 구조체의 멤버인 name, age, height 각각 가지게 된다. 이 멤버들에 접근할 때는 .연산자를 사용
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
//	struct Person p1; // Person 구조체 타입의 변수 p1 선언
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
//	strcpy(people[0].name, "코리아");
//	people[0].age = 30;
//	people[0].height = 180.0;
//
//	strcpy(people[1].name, "IT");
//	people[1].age = 30;
//	people[1].height = 180.0;
//
//	strcpy(people[2].name, "대구");
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
//	// 구조체 변수 선언과 동시에 초기화
//	struct person boy = { "김소년",12 };
//	struct person girl = { "이소녀",9 };
//
//	printf("소년의 이름은 %s이고 나이는 %d입니다.\n", boy.name, boy.age);
//	printf("소녀의 이름은 %s이고 나이는 %d입니다.\n", girl.name, girl.age);
//}

// 문제 : 구조체 student 에는 학생의 이름, 학번, 점수가 있습니다.
// 구조체를 사용하여 이름,학번,점수를 담으시오.

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
//	struct student stu = { "학생1",1,100.00 };
//	printf("입력한 학생 정보\n");
//	printf("이름 : %s\n", stu.name);
//	printf("학번 : %d\n", stu.id);
//	printf("점수 : %f\n", stu.score);
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
//    while (getchar() != '\n'); // 입력 버퍼 비우기
//}
//
//int main()
//{
//    struct student stu;
//
//    printf("학생 정보를 입력하세요.\n");
//
//    printf("이름: ");
//    fgets(stu.name, 20, stdin);  
//    stu.name[strcspn(stu.name, "\n")] = 0; // 줄바꿈 문자 제거
//
//    printf("학번: ");
//    scanf_s("%d", &stu.id);
//    clearInputBuffer();
//
//    printf("점수: ");
//    scanf_s("%f", &stu.score);
//    clearInputBuffer();
//
//    printf("\n입력한 학생 정보\n");
//    printf("이름 : %s\n", stu.name);
//    printf("학번 : %d\n", stu.id);
//    printf("점수 : %.1f\n", stu.score);
//
//    return 0;
//}

