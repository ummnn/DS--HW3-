#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [�̵���] [2019038027] -----]\n");
    
    int **x; //int�� ����Ű�� ���������� x ����
    printf("sizeof(x) = %lu\n", sizeof(x)); //x�� ������ ����: 4byte (int���� ũ��)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x�� ������ ����: 4byte (int���� ũ��)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x�� ������ ����: 4byte (int���� ũ��)
}