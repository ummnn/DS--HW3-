#include <stdio.h>

struct student1 { //����ü student1 ����
    char lastName;  //����ü ��� lastName ����
    int studentId;  //����ü ��� studentId ����
    char grade;  //����ü ��� grade ����
};

typedef struct { //����ü �̸��� struct
    char lastName; //����ü ��� lastName ����
    int studentId; //����ü ��� studentId ����
    char grade; //����ü ��� grade ����
} student2; //typedef�� ����Ͽ� ����ü ��Ī�� student2�� ����

int main()
{
    printf("[----- [�̵���] [2019038027] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; //student1�� ����ü st1 ���� �� �ʱ�ȭ

    printf("st1.lastName = %c\n", st1.lastName); //st1�� lastName ���: A
    printf("st1.studentId = %d\n", st1.studentId); //st1�� studentId ���: 100
    printf("st1.grade = %c\n", st1.grade); // st1�� grade ���: A
    
    student2 st2 = {'B', 200, 'B'}; //syudent2(����ü Ÿ��)�� st2 tjsdjs gn chrlghk
    
    printf("\nst2.lastName = %c\n", st2.lastName); //st2�� lastName ���: B
    printf("st2.studentId = %d\n", st2.studentId); //st2�� studentId ���: 200
    printf("st2.grade = %c\n", st2.grade); //st2�� grade ���: B
    
    student2 st3; //student2�� st3 ����
    
    st3 = st2; //st3�� st2 �Է�
    
    printf("\nst3.lastName = %c\n", st3.lastName); //st3�� lastName ���: B
    printf("st3.studentId = %d\n", st3.studentId); //st3�� studentId ���: 200
    printf("st3.grade = %c\n", st3.grade); //st3�� grade ���: B

    // equality test
    // ������ �۵����� �ʴ´�. ����ü�� �ְ� ������ �������� ���� �񱳿����ڷ� ����ü�� ������ ������ �� �� ����.
    // ������ �˰� �ʹٸ� ����ü�� ��� ����� �ϳ��� ���ؾ��Ѵ�.
    /*if(st3 == st2) //st3�� st2�� ���ٸ� equal ���
    printf("equal\n");

    else
    printf("not equal\n"); //�����ʴٸ� not equal ���

    return 0;*/
}