#include <stdio.h>
int main()
{
    char a[10];
    char b[10];
    char combined[50];
    scanf("%s%s",a,b);
    sprintf(combined,"%s and %s",a,b);
    printf("You enterd: %s\n":combined);
    return 0;
}