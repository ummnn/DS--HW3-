#include <stdio.h>

struct student{ //구조체 student 선언
    char lastName[13]; // 13 bytes //char형 구조체 멤버 lastName 선언
    int studentId;     // 4 bytes  //int형 구조체 멤버 studentId 선언
    short grade;       // 2 bytes  //short형 구조체 멤버 grade 선언
};

int main()
{
    printf("[----- [이동현] [2019038027] -----]\n");

    struct student pst; //구조체 student형 변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 사이즈 측정: 24byte
    /*구조체의 크기가 19byte가 아닌 이유는 가장 큰 자료형 크기의 배수로 정렬하기 떄문에
    (student구조체에서는 int형이 가장 크기 떄문에 int형 사이즈를 기준으로 구조체 정렬*/
    printf("size of int = %ld\n", sizeof(int)); //int의 사이즈 측정: 4byte
    printf("size of short = %ld\n", sizeof(short)); //short의 사이즈 측정: 2byte

    return 0;
}