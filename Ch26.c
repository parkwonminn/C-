////typedef 선언은 기존에 존재하는 자료형에 새 이름을 부여하는 것으로 복잡한 유형의 자료형 선언을 간결하게 해준다.
//
////typedef int myint;
//
////myint 는 int와 완전이 같은 데이터 타입으로 취급한다. int가 사용될 수 있는 모든 곳에서 myint도 사용 가능.
//
//#include <stdio.h>
//
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//
////int main()
////{
////	// 지역 내에서 사용할 자료형 이름에 대한 선언
////	typedef char CHAR;
////	typedef char* STR;
////
////	//typedef 선언 이후 자료형은 기존 자료형과 동일한 역활 수행
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
//////typedef 키워드를 사용하여 struct {int x; int y; 라는 구조체를 Point라는 새로운 데이터 타입으로 정의. 이제 Point는 구조체와 동일한 기능을 수행하며, 좌표 값을 저장하는 용도로 사용
////
////int main()
////{
////	Point p = { 3,4 };
////	printf("%d %d,", p.x, p.y);
////}
//
////Point를 변수로 선언하고 초기화하고 출력하는 코드
//// p 변수는 Point 데이터 타입으로 선언되어 있으며, 초기값으로 {3,4}를 할당한다.
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
////	PERSON human = { "코리아",15 };
////	printf("%d %d\n", position.x, position.y);
////	printf("%s %d\n", human.name, human.age);
////}
//
//// 문제 다음과 같은 구조체가 있을 때,
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
////1. Person 구조체를 사용해 3명의 사람 정보를 저장하는 배열을 만들고 출력하는 프로그램 작성
//
//int main()
//{
//	Student student[3] = {
//		{1,"코리아",25,165.5},
//		{2,"IT",30,180.0},
//		{3,"대구",20,185.5}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("학번 : %d\n", student[i].id);
//		printf("이름 : %s\n", student[i].name);
//		printf("나이 : %d\n", student[i].age);
//		printf("키 : %.1f\n", student[i].height);
//	}
//}
//
//
////2. Person 구조체를 수정해 학성 정보를 저장하는 구조체로 변경 -> 학생의 학번('id')정보를 추가해 보세요.
//// 이 후 3명의 학생 정보를 저장하는 배열을 만들고 출력하는 프로그램 만들기