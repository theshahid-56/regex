#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter teh value of a");
    scanf("%d",&a);
    printf("enter teh value of b");
    scanf("%d",&b);
    temp =a;
    a=b;
    b=temp;
    printf("swap  of two no %d %d", a,b);

}