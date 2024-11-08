#include<stdio.h>
#include<math.h>

int main(void)
{

    int a , c;

    printf("inter an ineger");
    scanf("%d",&a);

    c=a * a * a;

    printf("the cude of%d=%d\n",a ,c);

    c =pow(a,3);

    printf("the cude of%d=%d\n",a ,c);

    return 0;
}