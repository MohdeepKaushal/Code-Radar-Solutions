#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a>>31)&1){
        print("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}