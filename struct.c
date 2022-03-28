#include <stdio.h>

struct student1 { //구조체 student1 선언
    char lastName;  //구조체 멤버 lastName 선언
    int studentId;  //구조체 멤버 studentId 선언
    char grade;  //구조체 멤버 grade 선언
};

typedef struct { //구조체 이름은 struct
    char lastName; //구조체 멤버 lastName 선언
    int studentId; //구조체 멤버 studentId 선언
    char grade; //구조체 멤버 grade 선언
} student2; //typedef를 사용하여 구조체 별칭을 student2로 정의

int main()
{
    printf("[----- [이동현] [2019038027] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; //student1형 구조체 st1 선언 후 초기화

    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력: A
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 출력: 100
    printf("st1.grade = %c\n", st1.grade); // st1의 grade 출력: A
    
    student2 st2 = {'B', 200, 'B'}; //syudent2(구조체 타입)형 st2 tjsdjs gn chrlghk
    
    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력: B
    printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 출력: 200
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력: B
    
    student2 st3; //student2형 st3 선언
    
    st3 = st2; //st3에 st2 입력
    
    printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastName 출력: B
    printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력: 200
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력: B

    // equality test
    // 에러로 작동하지 않는다. 구조체가 있고 변수를 선언했을 때는 비교연산자로 구조체의 내용이 같은지 알 수 없다.
    // 같은지 알고 싶다면 구조체의 모든 멤버를 하나씩 비교해야한다.
    /*if(st3 == st2) //st3과 st2가 같다면 equal 출력
    printf("equal\n");

    else
    printf("not equal\n"); //같지않다면 not equal 출력

    return 0;*/
}