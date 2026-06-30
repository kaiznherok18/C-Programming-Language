/*#include<stdio.h>
int main(){
    int sain;
    printf("Enter a number:");
    scanf("%d",&sain);
    sain>0?printf("Positive number"):sain<0?printf("Negative number"):printf("Zero");

}*/

//Take a marks of student through keyboard and tell if the marks os student is greater than 33 print the result as "pass" otherwise "fail" without using if else statement.
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks of student:");
    scanf("%d",&marks);
    marks>33?printf("Pass"):printf("Fail");
}