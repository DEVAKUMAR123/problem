#include<stdio.h>

int main()
{
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
            printf(" \n%d is Even number ",i);
        else{
            printf("\n%d is odd number",i);
        }
    }

    return 0;

}
