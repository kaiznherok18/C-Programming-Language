//Take two number from user and find the greater number and print the greater number
//
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the first number:");
//     scanf("%d",&a);
//     printf("Enter the second number:");
//     scanf("%d",&b);
//     if(a>b){
//         printf("%d is  greater number",a);
//     }
//     else{
//         printf("%d is greater number",b);
//     }
// }
//Take a number as input from the user. check whether the number is even or odd,and then print the result.
/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2==0){
        printf(" %d is even number",x);
    }else{
        printf("%d is odd number",x);
    }
}*/
//
/*
#include<stdio.h>
int main(){
    char name[]="John";
    int age=45;
    if(age>=18){
        printf("%s Hello,%d you are eligible to vote\n",name,age);
    }
    else{
        printf("%s Hello,%d you are not eligible to vote in ",name,(18-age));
    }
}
*/
//same but different method
/*
#include<stdio.h>
int main(){
    int age;
    char name[]="raju";
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("Hello %s,you are eligible to voting.",name);
    }
    else{
        printf("Hello %s, you are not eligible to vote in %d  years .",name,(18-age) );
    }
}*/

/*
#include<stdio.h>
int main(){
    if(3>2){
        printf("3 is greater than 2\n");
    }
    if(5<10){
        printf("5 is less than 10\n");
    }
    if (17<12){
        printf("17 is greater than 12\n");
    }else{
        printf("17 is less than 12\n");
    }
}*/
//Accept a character from user and check if it is a vowel or a consonant.Print the result.
/*
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c is a consonant",ch);
    }
    
}*/
//Take year as input fromthe user. Check whether it it a leap year or not ,and print the result.
/*#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0){
            printf("%d is a century year and a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }
    }
    else if(year%4==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
}*/
//



