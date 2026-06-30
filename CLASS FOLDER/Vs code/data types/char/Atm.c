//Write a program to take amount and balance as input and check whether the balance is sufficient for the amount or not.
/*#include<stdio.h>
int main(){
    int amount, Balance, pin;
    Balance=1000;
    pin=3728;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    printf("Enter the pin: ");
    scanf("%d",&pin);
    if (pin!=3728){
        printf("Invalid pin.");
    }
    else if (amount>=Balance){
        printf("Balance kam ba .");
    }
    else if (amount%100==0){
        printf("Nikal goil  gare jo.");
    }
    else {
        printf("Enter the valid amount.");
    }
}*/

//TAke a any type of integer as input and check there are positive or negative or zero.
/*#include<stdio.h>
int  main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    if (x>0){
        printf(" positive integer.");
    }
    else if (x<0){
        printf("negative integer.");
    }
    else {
        printf("The number is zero.");
    }
}*/

//
/*#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the prime membership code: ");
    scanf("%d",&x);
    if (x==2){
        printf("Welcome to prime membership club. \n");
    }
    printf("Enter your shopping amount: ");
    scanf("%d",&y);
    if (400<=y){
        printf(" %d Add the Delivery charge: ");
    }
    else if (x!=2) {
        printf("Invalid prime membership code.");
        printf(" %d Add the Delivery charge: ", y+100);
    }
}*/










//Find middle among three number. Take three positive as input and [rint/find middle among of three integer.
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number: \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    printf("Enter the third number: \n");
    scanf("%d",&c);
    if (a>b){
        printf(" is the middle number.",a);
        if  (b>c){
            printf(" is the middle number.",a);
        }
        else {
            printf(" is the middle number.",c);
        }
    }

    else if (b>a && b<c){
        printf(" is the middle number.",b);
            }
    else{
        printf(" is the middle number.",c);
    }
}
*/

//write a program to take a three numbers as input and compare the three numbers and print the middle number.
/*#include<stdio.h>
int main(){     
    int a,b,c;
    printf("Enter the first number: \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    printf("Enter the third number: \n");
    scanf("%d",&c);
    if (a>b){
        if  (b>c){
            printf("%d is the middle number.",b);
        }
        else {
            printf("%d is the middle number.",c);
        }
    }

    else if (b>a && b<c){
        printf("%d is the middle number.",b);
            }
    else{
        printf("%d is the middle number.",c);
    }
}*/