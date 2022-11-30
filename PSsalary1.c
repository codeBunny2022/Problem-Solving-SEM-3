#include<stdio.h>
#include<conio.h>
void salary();
int main()
{
    salary();
    return 0;
}
void salary()
{
    int sal;
    char rank;
    float basic, hra, da, allow, pf, finalsal;
    printf("Enter your salary and class..\n");
    scanf("%d",&sal);
    scanf(" %c",&rank);
    hra =(sal*20)/100;
    da =(sal*50)/100;
    pf =(sal*11)/100;
    if(rank == 'A')
    {
        allow = 1700;
    }
    else if (rank == 'B')
    {
        allow = 1500;
    }
    else if (rank == 'C')
    {
        allow = 1300;
    }
    else
    {
        printf("Wrong class entered");
    }
    finalsal = sal+hra+da+allow-pf;
    printf("Final salary is %f:",finalsal);

}
