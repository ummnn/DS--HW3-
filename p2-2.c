#include <stdio.h>

void print1 (int *ptr, int rows); //print1 함수의 프로토타입

int main()
{
    printf("[----- [이동현] [2019038027] -----]\n");
    
    int one[] = {0,1,2,3,4}; //배열 one 선언

    printf("one = %p\n", one); //one의 주소 출력: 0061FF0C
    printf("&one = %p\n", &one); //one의 주소 출력: 0061FF0C
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소 출력: 0061FF0C
    printf("\n");
    print1(&one[0], 5); //print1 함수에 매개변수로 one[0]의 주소와 5를 보내고 실행
    return 0;
}

void print1 (int *ptr, int rows) //인자로 one[0]의 주소와 5를 받는다 
{
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) 
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr + 4바이트 * i 만큼 떨어져 있는 곳의 주소출력, 주소안의 값 출력
        printf("\n");

}
