#include <stdio.h>
int main()
{
    long int a;
    scanf("%ld",&a);
    if(a&1){
        print("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}