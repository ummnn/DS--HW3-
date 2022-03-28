#include <stdio.h>

#define MAX_SIZE 100 //상수 MAX_SIZE를 100으로

float sum(float [], int); //sum 함수의 프로토타입
float input[MAX_SIZE], answer; //float형 배열 input과 answer 선언
int i; //int형 변수 i 선언

void main(void)
{
    printf("[----- [이동현] [2019038027] -----]\n");
    
    for(i=0; i < MAX_SIZE; i++) //input배열에 0~99까지 100개의 값을 넣는다
        input[i] = i;

    /* for checking call by reference */
    printf("address of input = %p\n", input); //input의 주소 출력: 004070A0

    answer = sum(input, MAX_SIZE); //인수로 input(input의 주소)과 MAX_SIZE를 보내고 answer에 sum함수의 리턴값 할당
    printf("The sum is: %f\n", answer); //answer(sum함수)
    
}

float sum(float list[], int n) //매개변수로 input[](포인터)과 MAX_SIZE를 받는다
{
    printf("value of list = %p\n", list); //list의 값(input[]의 주소) 출력: 004070A0
    printf("address of list = %p\n\n", &list); //list의 주소 출력: 0061FF00

    int i;

    float tempsum = 0; //sum의 총합을 구하는 변수 tempsum 초기화

    for(i =0; i < n ; i++) //list[i]안에 있는 모든 값들을 더 한다
        tempsum += list[i];

        return tempsum; //0~99까지 더한 값인 4950 반환
    }