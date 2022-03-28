#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [�̵���] [2019038027] -----]\n");

    int list[5]; //int�� �迭 list ����
    int *plist[5] = {NULL,}; //int�� ���� �����͹迭 plist ���� �� NULL�� �ʱ�ȭ
    plist[0] = (int *)malloc(sizeof(int)); //int Ÿ�Ի����� ��ŭ�� �޸𸮸� �Ҵ�
    list[0] = 1; //list[0] 1�� �ʱ�ȭ
    list[1] = 100; //list[1] 100���� �ʱ�ȭ
    *plist[0] = 200; //plist[0]�� ����Ű�� ���� ���� 200���� ����

    printf("value of list[0] = %d\n", list[0]); //list[0]�� ��: 1
    printf("address of list[0] = %p\n", &list[0]); //list[0]�� �ּ�: 0061FF0C
    printf("value of list = %p\n", list); //list�� �ּ�: 0061FF0C
    printf("address of list (&list) = %p\n", &list); //list�� �ּ�: 0061FF0C

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); //list[1]�� ��: 100
    printf("address of list[1] = %p\n", &list[1]); //list[1]�� �ּ�: 0061FF10
    printf("value of *(list+1) = %d\n", *(list + 1)); //list���� 4����Ʈ��ŭ �̵��� ���� ��(list[1]): 100
    printf("address of list+1 = %p\n", list+1); //list���� 4����Ʈ��ŭ �̵��Ѱ��� �ּ�: 0061FF10

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]�� ����Ű�� ��(malloc�� ���� �Ҵ�)�� ��: 200
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]�� �ּ�: 0061FEF8
    printf("&plist = %p\n", &plist); //plist�� �ּ�: 0061FEF8
    printf("plist = %p\n", plist); //plist�� �ּ�: 0061FEF8
    printf("plist[0] = %p\n", plist[0]); //plist[0]�ȿ� ����Ǿ� �ִ� �ּ�(malloc�� ���� �Ҵ� �� �ּ�): 00761678
    printf("plist[1] = %p\n", plist[1]); //plist[1]�ȿ� ����Ǿ� �ִ� �ּ�: NULL
    printf("plist[2] = %p\n", plist[2]); //plist[2]�ȿ� ����Ǿ� �ִ� �ּ�: NULL
    printf("plist[3] = %p\n", plist[3]); //plist[3]�ȿ� ����Ǿ� �ִ� �ּ�: NULL
    printf("plist[4] = %p\n", plist[4]); //plist[4]�ȿ� ����Ǿ� �ִ� �ּ�: NULL

    free(plist[0]); //�����Ҵ� ����
}