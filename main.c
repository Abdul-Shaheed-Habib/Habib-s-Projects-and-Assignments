#include <stdio.h>
#include <stdlib.h>

int main()
{
    char g;

    struct student
    {
      char name[20];
      char sub[10];
      int marks;

    };
    struct student stud;

    printf("\nEnter student name:");
    scanf("%s", stud.name);
    printf("\nEnter Subject:");
    scanf("%s", stud.sub);
    printf("\nEnter your grade:");
    scanf("%d", stud.marks);

    if(stud.marks >=80)
        g='A';
    else if(stud.marks >=60)
        g='B';
    else if(stud.marks>=40)
        g='C';
    else
        g='D';
           printf("\n %s grade for %s is : %c",stud.name,stud.sub,g);

    return 0;
}
