#include <stdio.h>
int reverse(int n);
int main()
{
    int n,rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    rev = reverse(n);
    
    printf("The reverse of %d is %d\n", n, rev);
    
    return 0;
}
int reverse(int n)
{
    static int rev = 0;//once declared the var memory only deallocated at end of execution. 
    
    if (n == 0) {
        return rev;
    }
    
    rev = rev * 10 + n % 10;//
    return reverse(n / 10);
}