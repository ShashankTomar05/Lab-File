#include <stdio.h>
int main()
{
    printf("Shashank Tomar\n");

    int b,h,area;
    printf("Enter the base of the triangle: ");
    scanf("%d",&b);
    printf("Enter the hight of the triangle: ");
    scanf("%d",&h);
    area = 1/2*b*h;
    printf("The area of the triangle is: %d", area);
    
    return 0;
}