#include <stdio.h>

void print1 (int *ptr, int rows); //print1 �Լ��� ������Ÿ��

int main()
{
    printf("[----- [�̵���] [2019038027] -----]\n");
    
    int one[] = {0,1,2,3,4}; //�迭 one ����

    printf("one = %p\n", one); //one�� �ּ� ���: 0061FF0C
    printf("&one = %p\n", &one); //one�� �ּ� ���: 0061FF0C
    printf("&one[0] = %p\n", &one[0]); //one[0]�� �ּ� ���: 0061FF0C
    printf("\n");
    print1(&one[0], 5); //print1 �Լ��� �Ű������� one[0]�� �ּҿ� 5�� ������ ����
    return 0;
}

void print1 (int *ptr, int rows) //���ڷ� one[0]�� �ּҿ� 5�� �޴´� 
{
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) 
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr + 4����Ʈ * i ��ŭ ������ �ִ� ���� �ּ����, �ּҾ��� �� ���
        printf("\n");

}
