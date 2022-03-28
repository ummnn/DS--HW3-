#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [이동현] [2019038027] -----]\n");
    
    int **x; //int를 가리키는 이중포인터 x 선언
    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 사이즈 측정: 4byte (int형의 크기)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 사이즈 측정: 4byte (int형의 크기)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 사이즈 측정: 4byte (int형의 크기)
}