//1.question
// #include <stdio.h>
// int main() {
// int r,c;
// printf("Enter a number of rows:  " );
// scanf("%d", &r);
// printf("Enter a number of columns:  " );
// scanf("%d", &c);

//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;i++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
//2.Question
// #include <stdio.h>
// int main() {
// int r,c;
// printf("Enter a number of row:  " );
// scanf("%d", &r);
// printf("Enter a number of columns:  " );
// scanf("%d", &c);
//             if(r==c){
//                 printf("This is square");
//             }else{
//                 printf("This is rectangle");
//             }

//     return 0;
// }
//3.Question
// #include <stdio.h>


// int main() {
// int r,c;
// // printf("Enter a number of rows:  " );
// // scanf("%d", &r);
// printf("Enter a number of rows and columns:  " );
// scanf("%d", &c);

// for(int i=1;i<=c;i++){
//         printf("%d->",i);
//     for( int j=1;j<=c;j++){
//         printf(" %d",j);
//     }
//     printf(" \n");
// }

//     return 0;
// }
// //4.Question
//  #include <stdio.h>
//
//
//  int main() {
//  int r,c;
//  printf("Enter a number of rows and columns:  " );
//  scanf("%d", &r);
//  // printf("Enter a number of rows and columns:  " );
//  // scanf("%d", &c);
//
//  for(int i=1;i<=r;i++){
//      for(int j=i;j<=r;j++){
//          printf("%d",j);
//      }
//      printf(" \n");
//  }
//
//      return 0;
//   }
// //5.Question
// #include <stdio.h>
// int main() {
// int r,c;
// printf("Enter a number of rows :  " );
// scanf("%d", &r);
// // printf("Enter a number of columns:  " );
// // scanf("%d", &c);
//
// for(int i=1;i<=r;i++){
//     for(int j=i;j<=r;j++){
//         printf("*");
//     }
//     printf(" \n");
// }
//     return 0;
// }
//6.Question
//
// #include <stdio.h>
// int main() {
// int r,c;
// printf("Enter a number of rows :  " );
// scanf("%d", &r);
// // printf("Enter a number of columns:  " );
// // scanf("%d", &c);
//
// for(int i=1;i<=r;i++){
//     for(int j=1;j<=r-1+i;j++){
//         printf("* ");
//     }
//     printf(" \n");
// }
//     return 0;
// }
//7.Question
// #include <stdio.h>
// int main() {
// int r,c;
// printf("Enter a number of rows :  " );
// scanf("%d", &r);
// printf("Enter a number of columns:  " );
// scanf("%d", &c);
//
// for(int i=1;i<=r;i++){
//     for(int j=1;j<=c;j++){
//         printf("%d",i);
//     }
//     printf(" \n");
// }
//     return 0;
// }
//8.Question
// #include <stdio.h>
// int main() {
// int r,c;
// printf("Enter a number of rows :  " );
// scanf("%d", &r);
// printf("Enter a number of columns:  " );
// scanf("%d", &c);

// for(int i=1;i<=r;i++){
//     for(int j=1;j<=c;j++){
//         printf("%d",j);
//     }
//     printf(" \n");
// }
//     return 0;
// }
//9.Question

// #include <stdio.h>
//
//
// int main() {
//     int r,c;
//     printf("Enter a number of rows and columns:  " );
//     scanf("%d", &r);
//
//     for(int i=1;i<=r;i++){
//     char ch='a';
//         for(int j=1;j<=r;j++){
//             printf("%c",ch);
//             ch++;
//         }
//         printf(" \n");
//     }
//
//     return 0;
// }
//11.Question

// #include <stdio.h>
//
// int main() {
//     int r;
//
//     printf("Enter a number of rows and columns:  " );
//     scanf("%d", &r);
//
//     //char ch='A';
//     int a=1;
//  for(int i=1;i<=r;i++){
//
//      for(int j=1;j<=r;j++){
//          printf(" %d",a);
//
//             a=a+2;
//      }
//      printf(" \n");
//
//  }
//
//  return 0;
//  }