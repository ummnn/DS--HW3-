#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [�̵���] [2019038027] -----]\n");
    
    int list[5]; //int�� �迭 list ����
    int *plist[5]; //�����͹迭 plist ����

    list[0] = 10; //list[0] 10���� �ʱ�ȭ
    list[1] = 11; //list[1] 11�� �ʱ�ȭ

    plist[0] = (int*)malloc(sizeof(int)); //int Ÿ�Ի����� ��ŭ�� �޸𸮸� �Ҵ�

    printf("list[0] \t= %d\n", list[0]); //list[0]�� ��: 10
    printf("address of list \t= %p\n", list); //list�� �ּ�: 0061FF0C
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]�� �ּ�: 0061FF0C
    printf("address of list + 0 \t= %p\n", list+0); //list�� �ּ�: 0061FF0C
    printf("address of list + 1 \t= %p\n", list+1); //list���� int��ũ��(4����Ʈ) * 1��ŭ �̵��� ���� �ּ�: 0061FF10
    printf("address of list + 2 \t= %p\n", list+2); //list���� int��ũ��(4����Ʈ) * 2��ŭ �̵��� ���� �ּ�: 0061FF14
    printf("address of list + 3 \t= %p\n", list+3); //list���� int��ũ��(4����Ʈ) * 3��ŭ �̵��� ���� �ּ�: 0061FF18
    printf("address of list + 4 \t= %p\n", list+4); //list���� int��ũ��(4����Ʈ) * 4��ŭ �̵��� ���� �ּ�: 0061FF1C
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]�� �ּ�: 0061FF1C
    free(plist[0]); //�����Ҵ� ����
}