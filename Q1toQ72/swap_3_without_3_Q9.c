#include <stdio.h>
int main()
{
    printf("Shashank Tomar\n");
    
    int a, b, c;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);
    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}
