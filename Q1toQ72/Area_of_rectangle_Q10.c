#include <stdio.h>
int main()
{
    printf("Shashank Tomar\n");

    int l,w;
    int area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &w);
    area = l * w;
    printf("The area of the rectangle is %d", area);

    return 0;
}