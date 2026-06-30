//Write a program to generate a random number between 1 and 100 and ask the user to guess it.
//Display Too Hhg,Too Low or Correct guess until the correct number is guessed
// #include<stdio.h>
//     int main() {
//         int n,user;
//         printf("Enter the number : ");
//         scanf("%d",&n);
//         do{
//             printf("Guess the number: ");
//             scanf("%d",&user);
//             if (n==user) printf("Correct Number");
//             else if (user<n) printf("Too High\n");
//             else printf("Too Low\n");
//         }while (n!=user);
//     }

//Other question
//
// #include<stdio.h>
// int main() {
//     int u1,u2,u11,u12;
//     printf("Enter a  first user to choose number(1 to 100): ");
//     scanf("%d",&u1);
//     printf("Enter a secound user to choose number(1 to 100): ");
//     scanf("%d",&u2);
//
//
//     do{
//         printf("Guess the u1 number: ");
//         scanf("%d",&u12);
//         printf("Guess the u2 number: ");
//         scanf("%d",&u11);
//         if (u12<u1 || u11<u2) printf("Too High");
//         else if (u12>u1 || u11>u2) printf("Too Low");
//         else printf("correct number.");
//     }while (u1==u12 || u2==u11);
// }
