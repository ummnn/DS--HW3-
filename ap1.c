#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [이동현] [2019038027] -----]\n");

    int list[5]; //int형 배열 list 선언
    int *plist[5] = {NULL,}; //int에 대한 포인터배열 plist 선언 후 NULL로 초기화
    plist[0] = (int *)malloc(sizeof(int)); //int 타입사이즈 만큼의 메모리를 할당
    list[0] = 1; //list[0] 1로 초기화
    list[1] = 100; //list[1] 100으로 초기화
    *plist[0] = 200; //plist[0]이 가리키는 곳의 값을 200으로 변경

    printf("value of list[0] = %d\n", list[0]); //list[0]의 값: 1
    printf("address of list[0] = %p\n", &list[0]); //list[0]의 주소: 0061FF0C
    printf("value of list = %p\n", list); //list의 주소: 0061FF0C
    printf("address of list (&list) = %p\n", &list); //list의 주소: 0061FF0C

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); //list[1]의 값: 100
    printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소: 0061FF10
    printf("value of *(list+1) = %d\n", *(list + 1)); //list에서 4바이트만큼 이동한 곳의 값(list[1]): 100
    printf("address of list+1 = %p\n", list+1); //list에서 4바이트만큼 이동한곳의 주소: 0061FF10

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]이 가리키는 곳(malloc에 의해 할당)의 값: 200
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소: 0061FEF8
    printf("&plist = %p\n", &plist); //plist의 주소: 0061FEF8
    printf("plist = %p\n", plist); //plist의 주소: 0061FEF8
    printf("plist[0] = %p\n", plist[0]); //plist[0]안에 저장되어 있는 주소(malloc에 의해 할당 된 주소): 00761678
    printf("plist[1] = %p\n", plist[1]); //plist[1]안에 저장되어 있는 주소: NULL
    printf("plist[2] = %p\n", plist[2]); //plist[2]안에 저장되어 있는 주소: NULL
    printf("plist[3] = %p\n", plist[3]); //plist[3]안에 저장되어 있는 주소: NULL
    printf("plist[4] = %p\n", plist[4]); //plist[4]안에 저장되어 있는 주소: NULL

    free(plist[0]); //동적할당 해제
}