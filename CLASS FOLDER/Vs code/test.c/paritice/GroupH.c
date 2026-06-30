//1 to 10 questions is switch statement based questions.
//1.Input a number(1-7) and print the corresponding day name.
// #include <stdio.h>


// int main() {

//     int day;
//     printf("Enter a number of days : ");
//     scanf("%d",&day);
//     switch(day){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("Your number is inviald.");
//     }
//     return 0;
// } 
//2.Intput a month number(1-12) and print the month nume.
// #include <stdio.h>


// int main() {

//     int month;
//     printf("Enter a number of month");
//     scanf("%d",&month);
//     switch(month){
//         case 1:
//         printf("January");
//         break;
//         case 2:
//         printf("February");
//         break;
//         case 3:
//         printf("March");
//         break;
//         case 4:
//         printf("April");
//         break;
//         case 5:
//         printf("May");
//         break;
//         case 6:
//         printf("June");
//         break;
//         case 7:
//         printf("July");
//         break;
//         case 8:
//         printf("August");
//         break;
//         case 9:
//         printf("September");
//         break;
//         case 10:
//         printf("October");
//         break;
//         case 11:
//         printf("November");
//         break;
//         case 12:
//         printf("December");
//         break;
//         default:
//         printf("worng input.");
//     }

//     return 0;
// }
//3.Create a simple calculator using switch.
// #include <stdio.h>


// int main() {
// int n1,n2,m;
// printf("Enter a number 1:  ");
// scanf("%d", &n1);
// printf("Enter a number 2:  ");
// scanf("%d", &n2);
// printf("Enter the method(sum=1,sub=2,mul=3,div=4):  ");
// scanf("%d",&m);
//     switch(m){
//         case 1:
//         printf("sum = %d",n1+n2);
//         break;
//         case 2:
//         printf("sub = %d",n1-n2);
//         break;
//         case 3:
//         printf("mul = %d",n1*n2);
//         break;
//         case 4:
//         printf("div = %d",n1/n2);
//         break;
//     }
//     return 0;
// }
//4.Input a vowel character and print its  name using switch.
// #include <stdio.h>


// int main() {
//     char v;
//     printf("Enter a vowel character: ");
//     scanf(" %c", &v);

//     switch (v) {
//         case 'a':
//         case 'A':
//             printf("vowel");
//             break;
//         case 'e':
//         case 'E':
//             printf("vowel");
//             break;
//         case 'i':
//         case 'I':
//             printf("vowel");
//             break;
//         case 'o':
//         case 'O':
//             printf("vowel");
//             break;
//         case 'u':
//         case 'U':
//             printf("vowel");
//             break;
//         default:
//             printf("consonant");
//             break;
//     }

//     return 0;
// }
//5.Print menu options(Tea,Coffee,Cold Drink,Water) base on user choice.
// #include <stdio.h>


// int main() {
// int M;
// printf("Enter the menu(Tea=1,Coffee=2,Cold Drink=3,Water=4):  " );
// scanf("%d", &M);

//     switch(M){
//         case 1:
//         printf("Enjoy the tea,sir");
//         break;
//         case 2:
//         printf("Enjoy the Coffee,sir");
//         break;
//         case 3:
//         printf("Enjoy the Cold Drink,sir");
//         break;
//         case 4:
//         printf("Enjoy the Water,sir");
//         break;
//         default:
//         printf("Sir,You choose wrong menu options.");
//     }

//     return 0;
// }
//6.Input a digit(0-9) and print its word form(Zero,One,Two....).
// #include <stdio.h>


// int main() {
// int n;
// printf("Enter a number:  " );
// scanf("%d", &n);

//     switch(n){
//         case 0:
//         printf("Zero");
//         break;
//         case 1:
//         printf("One");
//         break;
//         case 2:
//         printf("Two");
//         break;
//         case 3:
//         printf("Three");
//         break;
//         case 4:
//         printf("Four");
//         break;
//         case 5:
//         printf("Five");
//         break;
//         case 6:
//         printf("Six");
//         break;
//         case 7:
//         printf("Seven");
//         break;
//         case 8:
//         printf("Eight");
//         break;
//         case 9:
//         printf("Night");
//         break;
//         default:
//         printf("Wrong input");
//     }

//     return 0;
// }
//7.Build a basic ATM menu: 1=Balance check, 2=Deposit, 3=Withdraw, 4=Exit.
// #include <stdio.h>


// int main() {
// int M,B=100,D,W;
// printf("Enter a ATM menu(1=Balance check, 2=Deposit, 3=Withdraw, 4=Exit):  " );
// scanf("%d",&M);

//     switch(M){
//         case 1:
//         printf("Your Balance is %d",B);
//         break;
//         case 2:
//         printf("Enter a Deposit: ");
//         scanf("%d",&D);
//         printf("Successfully your Deposit.\n");
//         printf("Your total Balance is %d.",B+D);
//         break;
//         case 3:
//         printf("Enter a Withdrow amount: ");
//         scanf("%d",&W);
//         printf("Your withdraw is successful %d.",B-W);
//         break;
//         case 4:
//         printf("Exit");
//         break;
//     }

//     return 0;
// }
//8.Input an operator(+,-,*,/) and perform the operation.
// #include <stdio.h>


// int main() {
// char o;
// int n1,n2,sum,sub,mul,div;
// printf("Enter a number1:  ");
// scanf("%d",&n1);
// printf("Enter a number2:  ");
// scanf("%d",&n2);
// printf("Enter a operator(+,-,*,/): ");
// scanf(" %c",&o);
//         o=1;
//         sum=n1+n2;
//         o=2;
//         sub=n1-n2;
//         o=3;
//         mul=n1*n2;
//         o=4;
//         div=n1/n2;
//     switch(o){
//         case 1:
//         printf("Sum = %d",sum);
//         break;
//         o=2;
//         case 2:
//         printf("Sub = %d",sub);
//         break;
//         o=3;
//         case 3:
//         printf("Mul = %d",mul);
//         break;
//         o=4;
//         case 4:
//         printf("Div = %d",div);
//         break;
//     }
//     return 0;
// }
//9.Create a language selection menu: 1=English, 2=Hindi, 3=Bengali, 4=Marathi.
// #include <stdio.h>


// int main() {
// int M;
// printf("Choose a language(1=English, 2=Hindi, 3=Bengali, 4=Marathi):  ");
// scanf("%d", &M);

//     switch(M){
//         case 1:
//         printf("English");
//         break;
//         case 2:
//         printf("Hindi");
//         break;
//         case 3:
//         printf("Bengali");
//         break;
//         case 4:
//         printf("Marathi");
//         break;
//         }

//     return 0;
// } 
//10.