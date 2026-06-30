#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("a ka value hai : %d\n",a);
    printf("b ka value hai : %d\n",b);
    a=b;
    b=a-10;
    printf("a ka value hai : %d\n",a);
    printf("b ka value hai : %d",b);
}