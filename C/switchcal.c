#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter first no:");
    scanf("%d",&a);
    printf("enter second no:");
    scanf("%d",&b);
    printf("enter operation:");
    scanf("%d",&c);
    
    switch(c)
    {
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;

    }
}