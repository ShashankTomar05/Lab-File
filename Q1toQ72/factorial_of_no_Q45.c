#include <stdio.h>
int main()
{
    printf("Shashank Tomar\n");

    int i,fact=1,n;
    printf("Enter number to calculate factorial:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %d", n, fact);

    return 0;
}