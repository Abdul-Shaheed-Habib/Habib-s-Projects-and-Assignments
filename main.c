#include <stdio.h>
#include <stdlib.h>

int main()
{
    char emp[10];
    char gender;
    long salary;

    printf("\n Please input your name");
    gets(emp);

    printf("Are u a male? (Yes/No):");
    gender=getche();

    printf("Are a female? (Yes/No):");
    gender=getche();

    printf("\n Input your salary please:");
    scanf("%ld",&salary);

    if(gender !='y')
        printf("%s is a male", emp);
    else
        printf("%s is a male", emp);

    if((salary>45000) && (salary<75000))
     printf("and has a salary between 45000 and 75000GHC");
    else if((salary <45000 || salary>75000))
        printf("and has a salary less than 45000 or greater than 75000GHC");
    return 0;
}
