#include <stdio.h>

#define MAX_SIZE 100 //��� MAX_SIZE�� 100����

float sum(float [], int); //sum �Լ��� ������Ÿ��
float input[MAX_SIZE], answer; //float�� �迭 input�� answer ����
int i; //int�� ���� i ����

void main(void)
{
    printf("[----- [�̵���] [2019038027] -----]\n");
    
    for(i=0; i < MAX_SIZE; i++) //input�迭�� 0~99���� 100���� ���� �ִ´�
        input[i] = i;

    /* for checking call by reference */
    printf("address of input = %p\n", input); //input�� �ּ� ���: 004070A0

    answer = sum(input, MAX_SIZE); //�μ��� input(input�� �ּ�)�� MAX_SIZE�� ������ answer�� sum�Լ��� ���ϰ� �Ҵ�
    printf("The sum is: %f\n", answer); //answer(sum�Լ�)
    
}

float sum(float list[], int n) //�Ű������� input[](������)�� MAX_SIZE�� �޴´�
{
    printf("value of list = %p\n", list); //list�� ��(input[]�� �ּ�) ���: 004070A0
    printf("address of list = %p\n\n", &list); //list�� �ּ� ���: 0061FF00

    int i;

    float tempsum = 0; //sum�� ������ ���ϴ� ���� tempsum �ʱ�ȭ

    for(i =0; i < n ; i++) //list[i]�ȿ� �ִ� ��� ������ �� �Ѵ�
        tempsum += list[i];

        return tempsum; //0~99���� ���� ���� 4950 ��ȯ
    }