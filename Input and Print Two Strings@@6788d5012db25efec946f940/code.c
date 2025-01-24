#include <stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    char combined[50];
    scanf("%s%s",str1,str2);
    sprintf(combined,"%s and %s",str1,str2);
    printf("You enterd: %s\n":combined);
    return 0;
}