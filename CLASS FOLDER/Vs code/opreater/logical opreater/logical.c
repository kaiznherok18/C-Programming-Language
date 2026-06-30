#include <stdio.h>


int main() {
    int a=2,b=5;

    printf("%d\n",!(a<b && b>a));//1
    printf("%d\n",(a<b || b>a));//1


    return 0;
}