#include<stdio.h>
int main()
{int arr[10],i;
for(i=0;i<5;i++)
 scanf("%d",&arr[i]);
for(i=0;i<5;i++){switch (arr[i]){
case 1 :
printf("one\n");
break;case 2 :
printf("two\n");
break;
case 3 :
printf("three\n");
break;
case 4 :
printf("four\n");
break;case 5 :printf("five\n");
break;
default :
printf("enter 1 2 3 4");
}}
}
