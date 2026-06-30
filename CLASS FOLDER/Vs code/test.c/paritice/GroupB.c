//1 to 10 questions slove using to if else ladder.
//1.Find the largest among three number.
// #include <stdio.h>


// int main() {

//     int x, y, z;
//     printf("Enter a x value : ");
//     scanf("%d",&x);
//     printf("Enter a y value : ");
//     scanf("%d",&y);
//     printf("Enter a z value : ");
//     scanf("%d",&z);
//     if(x>y && x>z){
//         printf("%d is largest number.",x);
//     }else if(y>x && y>z){
//         printf("%d is largest number.",y);
//     }else{
//     printf("%d is largest number.",z);
//     }
//     return 0;
// }
//2.Print grade based on marks.
// #include <stdio.h>


// int main() {
//     int M;
//     printf("Enter the marks : ");
//     scanf("%d",&M);
//     if(M<=100 && M>=80){
//         printf("Grade : A");
//     }else if(M<80 && M>=60){
//         printf("Grade : B");
//     }else if(M<60 && M>=40){
//         printf("Grade : C");
//     }else{
//         printf("Grade : D");
//     }   

//     return 0;
// }
//3.Create a simple calculator(+,-,*,/).
// #include <stdio.h>


// int main() {

//     int n1,n2,c;
//     printf("Enter a number1 : ");
//     scanf("%d",&n1);
//     printf("Enter a number2 : ");
//     scanf("%d",&n2);
//     int sum=1,sub=2,mul=3,div=4;
//     printf("Enter the method(sum=1,sub=2,mul=3,div=4): ");
//     scanf("%d",&c);
//     if(c==1){
//         printf("%d sum %d equal to : %d",n1,n2,(n1+n2));
//     }
//     else if(c==2 && n1>n2){
//         printf("%d sub %d equal to : %d",n1,n2,(n1-n2));
//     }  
//     else if(c==2 && n1<n2){
//         printf("%d sub %d equal to : %d",n2,n1,(n2-n1));
//     }  
//     else if(c==3){
//         printf("%d mul of %d equal to : %d",n1,n2,(n1*n2));
//     }
//     else if(c==4 && n1>n2){
//         printf("%d div of %d equal to : %d",n1,n2,(n1/n2));
//     }
//     else if(c==4 && n1<n2){
//         printf("%d div of %d equal to : %d",n2,n1,(n2/n1));
//     }
//     else{
//         printf("Invalid choice!");
//     }

//     return 0;
// }
//4.print month name using month number.
// #include <stdio.h>


// int main() {

//     int m;
//     printf("Enter a month number : ");
//     scanf("%d",&m);
//     if(m==1){
//         printf("%d month number is january",m);
//     }else if(m==2){
//         printf("%d month number is february",m);
//     }else if(m==3){
//         printf("%d month number is March",m);
//     }else if(m==4){
//         printf("%d month number is April",m);
//     }else if(m==5){
//         printf("%d month number is May",m);
//     }else if(m==6){
//         printf("%d month number is June",m);
//     }else if(m==7){
//         printf("%d month number is July",m);
//     }else if(m==8){
//         printf("%d month number is August",m);
//     }else if(m==9){
//         printf("%d month number is September",m);
//     }else if(m==10){
//         printf("%d month number is October",m);
//     }else if(m==11){
//         printf("%d month number is November",m);
//     }else{
//         printf("%d month number is December",m);
//     }
//     return 0;
// }
//5.Print day name using day number.
// #include <stdio.h>


// int main() {

//         int d;
//     printf("Enter a day number : ");
//     scanf("%d",&d);
//     if(d==1){
//         printf("%d  number is Monday",d);
//     }else if(d==2){
//         printf("%d month number is Tuesday",d);
//     }else if(d==3){
//         printf("%d month number is Wednesday",d);
//     }else if(d==4){
//         printf("%d month number is Thursday",d);
//     }else if(d==5){
//         printf("%d month number is Friday",d);
//     }else if(d==6){
//         printf("%d month number is Saturday",d);
//     }else{
//         printf("%d month number is Sunday",d);
//     }

//     return 0;
// }
//6.Check whether a number is positive , negative or zero.
// #include <stdio.h>


// int main() {

//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     if(n==0){
//         printf("%d nunber is zero.",n);
//     }
//     else if(n>0){
//         printf("%d nunber is positive.",n);
//     }
//     else{
//         printf("%d nunber is negative.",n);
//     }

//     return 0;
// }
//7.Calculate discount based on purchase amount.
// #include <stdio.h>


// int main() {
// int p;
// printf("Enter a amount : ");
// scanf("%d",&p);
// if(p<=800 && p>=600){
//     printf("Your discount is 30%% off purchase product.");
// }
// else if(p<600 && p>=400){
//     printf("Your discount is 20%% off purchase product.");
// }else if(p<400 && p>=200){
//     printf("Your discount is 10%% off purchase product.");
// }else{
//     printf("Sir,you are purchase the more product and diffently add the discount.");
// }
//     return 0;
// }
//8.Calculate the electricity bill based on units consumed.
// #include <stdio.h>


// int main() {

//     int unit;
//     printf("Enter the your units : ");
//     scanf("%d",&unit);
//     if(unit<=10 && unit>=8){
//         printf("Your electricity bill is %d",(unit*8));
//     }
//     else if(unit<8 && unit>=6){
//         printf("Your electricity bill is %d",(unit*3));
//     }
//     else if(unit<6 && unit>=4){
//         printf("Your electricity bill is %d",(unit*2));
//     }
//     else{
//         printf("Your electricity bill is free");
//     }

//     return 0;
// }
//9.Assign division(First,second,third,fail)based on percentage.
// #include <stdio.h>


// int main() {

//     int per;
//     printf("Enter a percentage : ");
//     scanf("%d",&per);
//     if(per<=100 && per>=80){
//         printf("First");
//     }else if(per<80 && per>=60){
//         printf("second");
//     }else if(per<60 && per>=40){
//         printf("third");
//     }else{
//         printf("Fail");
//     }

//     return 0;
// }
//10.Find the greatest among four number.
// #include <stdio.h>


// int main() {

//     int n1,n2,n3,n4;
//     printf("Enter a number 1 : ");
//     scanf("%d",&n1);
//     printf("Enter a number 2 : ");
//     scanf("%d",&n2);
//     printf("Enter a number 3 : ");
//     scanf("%d",&n3);
//     printf("Enter a number 4 : ");
//     scanf("%d",&n4);
//     if(n1>n2 && n1>n3 && n1>n4){
//         printf("%d is greatest number.",n1);
//     }else if(n2>n1 && n2>n3 && n2>n4){
//         printf("%d is greatest number.",n2);
//     }else if(n3>n2 && n3>n1 && n3>n4){
//         printf("%d is greatest number.",n3);
//     }else{
//         printf("%d is greatest number.",n4);
//     }

//     return 0;
// }