#include <stdio.h>
int main()
{
    float r,Area;
    scandf("%f",r);
    Area = 3.14*r*r;
    printf("%.2f",Area);
    return 0;
}