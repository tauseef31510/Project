#include <stdio.h>
int main()
{
 int i,b=2;
 int a[5] = {1,2,3,4,5};
 for(i=0;i<5;i++){
 if(b==a[i])
 {
 printf("element is found ");
 break;
 }
 }
 return 0;
}
