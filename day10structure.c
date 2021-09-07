#include<stdio.h>
void main()
{
    struct student{
        char name[20];
        int roll;
        float marks;
        char remarks;
    };
    struct student s;
    /*
    s = ("ram", 45, 34, p);
    or
    s.name = "ram";
    s.roll = 23;
    s.marks = 40.0;

    */
    printf("Enter name:\n\t");
    gets(s.name);
    printf("Enter roll: \n\t");
    scanf("%d",&s.roll);
    printf(" Enter marks: \n\t");
    scanf("%f",&s.marks);
    printf("Enter remark p for pass or f for fail: \n\t");
    s.remarks = getche();
    printf("\n\n The student's information is \n");
    printf("Student Name\t\tRoll\t\tMarks\tRemarks\n");
    printf("\n--------------------------------\n");
    printf("%s\t\t%d\t\t%.2f\t%c",s.name,s.roll,s.marks,s.remarks);
}


