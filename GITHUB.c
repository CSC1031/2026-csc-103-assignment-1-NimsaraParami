#include <stdio.h>

int main()
{
    int m1,m2,m3,total;
    float average;
    char grade;
    printf("Enter your Mathematics marks:");
    scanf("%d",&m1);
    printf("Enter your science marks:");
    scanf("%d",&m2);
    printf("Enter your english marks");
    scanf("%d",&m3);

    total=m1+m2+m3;
    average=total/3.0;
    printf("Total=%d\n",total);
    printf("Average=%.2f\n",average);
     if (average>=80)
        grade='A';
     else if (average>=70)
        grade ='B';
     else if (average>=60)
        grade ='C';
     else if (average>=50)
        grade ='D';
     else
        grade ='F';
    printf("Grade=%c\n",grade);

    if (m1>=40 &&m2 >=40 && m3>=40)
        printf("Status:PASS\n");
    else
        printf("Status:FAIL\n");
    return 0;
}

