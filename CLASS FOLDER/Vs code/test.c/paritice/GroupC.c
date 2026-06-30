//1 to 10 Questions for nested if else using.
//1.Find the largest among three numbers using nested if.
// #include <stdio.h>


// int main() {

//     int a,b,c;
//     printf("Enter the number a : ");
//     scanf("%d",&a);
//     printf("Enter the number b : ");
//     scanf("%d",&b);
//     printf("Enter the number c : ");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("The largest number of %d",a);
//     }else if(b>a && b>c){
//         printf("The largest number of %d",b);
//     }else{
//         printf("The largest number of %d",c);
//     }

//     return 0;
// }
//2.Find the smallest anomg three numbers using nested if.
// #include <stdio.h>


// int main() {

//         int a,b,c;
//     printf("Enter the number a : ");
//     scanf("%d",&a);
//     printf("Enter the number b : ");
//     scanf("%d",&b);
//     printf("Enter the number c : ");
//     scanf("%d",&c);
//     if(a<b && a<c){
//         printf("The smallest number of %d",a);
//     }else if(b<a && b<c){
//         printf("The smallest number of %d",b);
//     }else{
//         printf("The smallest number of %d",c);
//     }

//     return 0;
// }
//3.Check whether a number is positive and even.
// #include <stdio.h>


// int main() {

//     int x;
//     printf("Enter the number x : ");
//     scanf("%d",&x);
//     if(x%2==0){
//         printf("%d is even number ",x);
//     }
//     else if(x>=0){
//         printf("%d is positive number ",x);
//     }
//     else{
//         printf("%d is  not even or positive  number ",x);
//     }

//     return 0;
// } 
//4.Check admission eligibility based on marks in three subjects.
// #include <stdio.h>


// int main() {

//     int p,c,m;
//     printf("Enter the physics marks : ");
//     scanf("%d",&p);
//     printf("Enter the chemistry marks : ");
//     scanf("%d",&c);
//     printf("Enter the mathematics marks : ");
//     scanf("%d",&m);
//     if(p>=30 && c>=30 && m>=30){
        
//             printf("Welcome a kz");
//     }
//         else if(p>=30 && c>=30 && m<=30){    
//                 printf("you are more focus to math subject\n");
//                 printf("You are pass physics and chemistry marks but not in if  mathematics marks  ");
//     }
//             else if(p>=30 && c<=30 && m>=30){    
//                 printf("you are more focus to chemistry subject");
//                 printf("You are pass physics and mathematics marks but not in if  chemistry marks  ");
//     }       
//         else if(p<=30 && c>=30 && m>=30){    
//                 printf("you are more focus to physics subject");
//                 printf("You are pass mathematics and chemistry marks but not in if physics marks  ");
//     }
//         else{
//             printf("Next time try agian");
//         }

//     return 0;
// }
//5.Determine triangle type using three sides.
// #include <stdio.h>


// int main() {

//     int x,y,z;
//     printf("Enter the one angle value : ");
//     scanf("%d",&x);
//     printf("Enter the second value : ");
//     scanf("%d",&y);
//     printf("Enter the third value : ");
//     scanf("%d",&z);
//     if(180==x+y+z){
//         printf("this is triangle");
//     }else{
//         printf("Not is triangle");
//     }

//     return 0;
// }
//6.Find the largest among four numbers.
// #include <stdio.h>


// int main() {

//     int a,b,c,d;
//     printf("Enter the a value : ");
//     scanf("%d",&a);
//     printf("Enter the b value : ");
//     scanf("%d",&b);
//     printf("Enter the c value : ");
//     scanf("%d",&c);
//     printf("Enter the d value : ");
//     scanf("%d",&d);
//     if(a>b && a>c && a>d){
//         printf("%d the largest number",a);
//     }
//     else if(b>a && b>c && b>d){
//         printf("%d the largest number",b);
//     }
//     else if(c>a && c>b && c>d){
//         printf("%d the largest number",c);
//     }else{
//         printf("%d the largest number",d);
//     }

//     return 0;
// }
//7.Check wheher a year is leap year and century year.
// #include <stdio.h>


// int main() {

//     int y;
//     printf("Enter a year : ");
//     scanf("%d",&y);
//     if(y%4==0 && y%100!=0){
//         printf("%d is leap year",y);
//     }else if(y%400==0){
//         printf("%d is century year",y);
//     }
//     else{
//         printf("%d is not leap year",y);
//     }


//     return 0;
// }
//8.Check whether a student passed all subjects.
// #include <stdio.h>


// int main() {

//     int phy,che,math,eng,hindi;
//     printf("Enter the physics marks : ");
//     scanf("%d",&phy);
//     printf("Enter the chemistry marks : ");
//     scanf("%d",&che);
//     printf("Enter the math mathematics marks : ");
//     scanf("%d",&math);
//     printf("Enter the math marks : ");
//     scanf("%d",&eng);
//     printf("Enter the hindi marks : ");
//     scanf("%d",&hindi);
//     float total=phy+che+math+eng+hindi;
//     float pre=total/5;
//     if(pre<=100 && pre>=80 && phy>=30 && che>=30 && math>=30 && eng>=30 && hindi>=30){
//         printf("you are excellent students ");
//     }
//     else if(pre<80 && pre>=60 && phy>=30 && che>=30 && math>=30 && eng>=30 && hindi>=30){
//         printf("you are very good students ");
//     }
//     else if(pre<60 && pre>=40 && phy>=30 && che>=30 && math>=30 && eng>=30 && hindi>=30){
//         printf("you are good students");
//     }
//     else if(pre<40 && pre>=30 && phy>=30 && che>=30 && math>=30 && eng>=30 && hindi>=30){
//         printf("you are pass ");
//     }
//     else{
//         printf("Fail");
//     }
//     return 0;
// }
//9.Check whether a number is divisible by both 2 and 3.
// #include <stdio.h>


// int main() {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);

//     if(n%2==0 && n%3==0){
//         printf("%d is divisible by both 2 and 3",n);
//     }else if(n%2==0){
//         printf("%d is divisible by only 2",n);
//     }else if(n%3==0){
//         printf("%d is divisible by only 3",n);
//     }
//     else{
//         printf("%d  is not divisible by both 2 and 3",n);
//     }

//     return 0;
// }
//10.Determine employee bouns based on experience and salary.
// #include <stdio.h>


// int main() {

//     int s,e;
//     printf("Enter a your salary : ");
//     scanf("%d",&s); 
//     printf("Enter a your experience : ");
//     scanf("%d",&e);
//     int E=50;
//     int G=30;
//     int A=10;
//     int L=0;
//     if(s>=80 && e>=8){
//         printf("Your are  excellent employee and company bouns is %d rupees",E);
//     }else if(s>=60  && e>=6){
//         printf("Your are Good employee and company bouns is %d rupees",G);
//     }else if(s>=40 && e>=2){
//         printf("Your are Average employee and company bouns is %d rupees\n",A);
//         printf("Next time do the best employee");
//     }else{
//         printf("I hope you are try to next time do more experience %d rupees",L);
//     }

//     return 0;
// }