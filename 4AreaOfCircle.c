#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    float area = pi*r*r;
    printf("Area of circle is %f having the radius %d\n",area,r);
    return 0;
}