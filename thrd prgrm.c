#include<stdio.h>
int main()
{
    int i,j,rows,space,coefficient=1;
    printf("enter the num of rows");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                coefficient=1;
            else
                coefficient=coefficient*(i-j+1)/j;
                printf("%4d",coefficient);
        }
        printf("\n");
    }
    return 0;
}
