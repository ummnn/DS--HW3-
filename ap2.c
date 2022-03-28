#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [이동현] [2019038027] -----]\n");
    
    int list[5]; //int형 배열 list 선언
    int *plist[5]; //포인터배열 plist 선언

    list[0] = 10; //list[0] 10으로 초기화
    list[1] = 11; //list[1] 11로 초기화

    plist[0] = (int*)malloc(sizeof(int)); //int 타입사이즈 만큼의 메모리를 할당

    printf("list[0] \t= %d\n", list[0]); //list[0]의 값: 10
    printf("address of list \t= %p\n", list); //list의 주소: 0061FF0C
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]의 주소: 0061FF0C
    printf("address of list + 0 \t= %p\n", list+0); //list의 주소: 0061FF0C
    printf("address of list + 1 \t= %p\n", list+1); //list에서 int의크기(4바이트) * 1만큼 이동한 곳의 주소: 0061FF10
    printf("address of list + 2 \t= %p\n", list+2); //list에서 int의크기(4바이트) * 2만큼 이동한 곳의 주소: 0061FF14
    printf("address of list + 3 \t= %p\n", list+3); //list에서 int의크기(4바이트) * 3만큼 이동한 곳의 주소: 0061FF18
    printf("address of list + 4 \t= %p\n", list+4); //list에서 int의크기(4바이트) * 4만큼 이동한 곳의 주소: 0061FF1C
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]의 주소: 0061FF1C
    free(plist[0]); //동적할당 해제
}