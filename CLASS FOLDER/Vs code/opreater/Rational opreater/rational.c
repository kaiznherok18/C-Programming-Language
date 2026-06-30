#include <stdio.h>


int main() {

    int a,b;
    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter a value : ");
    scanf("%d",&b);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",(a>b),(a<b),(a>=b),(a<=b),(a==b),(a!=b));
    // printf("%d\n",(a>b));
    // printf("%d\n",(a<b));
    // printf("%d\n",(a>=b));
    // printf("%d\n",(a<=b));
    // printf("%d\n",(a==b));
    // printf("%d\n",(a!=b)); 
    return 0;
}