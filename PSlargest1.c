#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three values!\n");
    scanf(" %d\n",&a);
    scanf(" %d\n",&b);
    scanf(" %d\n",&c);
    if(a>b && a>c)
        printf("%d is greatest.",a);
    else if(b>a && b>c)
        printf("%d is greatest.",b);
    else
        printf("%d is greatest.",c);
    return 0;
}
