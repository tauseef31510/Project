#include<stdio.h>
int main()
{
int i,arr[] = {60, 50, 40, 30, 20, 10};
int n =(sizeof(arr))/(sizeof(arr[0]));
bubblesort(arr,n);
printf("enter the sorted :");
for (i=0;i<n;i++)
printf("%d \n",arr[i]);
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
return 0;
}