/*#include <stdio.h>
int main(){
    int x=10;
    int y=20;
    x=x+y;
    y=x-y;
    printf("y ka value hai : %d\n",y);
    x=x-y;
    printf("x ka value hai : %d\n",x); 
}*/

#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d\n",&b);
    int sum = a + b;
    printf("sum of a and b is: %d", sum);

}