#include <stdio.h>

struct student{ //����ü student ����
    char lastName[13]; // 13 bytes //char�� ����ü ��� lastName ����
    int studentId;     // 4 bytes  //int�� ����ü ��� studentId ����
    short grade;       // 2 bytes  //short�� ����ü ��� grade ����
};

int main()
{
    printf("[----- [�̵���] [2019038027] -----]\n");

    struct student pst; //����ü student�� ���� pst ����

    printf("size of student = %ld\n", sizeof(struct student)); //����ü student�� ������ ����: 24byte
    /*����ü�� ũ�Ⱑ 19byte�� �ƴ� ������ ���� ū �ڷ��� ũ���� ����� �����ϱ� ������
    (student����ü������ int���� ���� ũ�� ������ int�� ����� �������� ����ü ����*/
    printf("size of int = %ld\n", sizeof(int)); //int�� ������ ����: 4byte
    printf("size of short = %ld\n", sizeof(short)); //short�� ������ ����: 2byte

    return 0;
}