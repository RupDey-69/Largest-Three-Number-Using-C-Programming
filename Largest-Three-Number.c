#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter the fast Number:");
    scanf("%d", &a);
    printf("Enter The Second Number:");
    scanf("%d", &b);
    printf("Enter the Third Number:");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {

        printf("The Fast Number Greater:%d", a);
    }

    else if (b >= a && b >= c)
    {

        printf("The Second  greater :%d", b);
    }

    else
    {

        printf("The Thrid Number Greater :%d", c);
    }
}