#include<stdio.h>
int main()
{
    int i,j,sp=5,a=1    ;
    for(i=1;i<=5;i++){
        for(j=1;j<=sp;j++)
            printf("\t");
        for(j=5;j>=i;j--)
            printf("%d\t",a++);
        sp++;
        a+=5;
        printf("\n");
    }
}