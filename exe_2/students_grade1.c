#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);
    if(marks < 0 || marks >100)//it can display the marks from 0to100 otherwise print the entry wrong.
    {
        printf("wrong entry");
    }
    else if(marks>=90)//if the marks should >90.prints grade A.
    {
        printf("grade A");
    }
    else if(marks >=70 && marks < 90)// if the marks>70to90.prints grade B.
    {
        printf("grade B");
    }
    else if(marks >=50 && marks < 70)//if marks>50to70.prints grade C.
    {
        printf("grade C");
    }
    else if(marks < 50)//if marks <50.prints grade F.
    {
        printf("grade F");
    }
}