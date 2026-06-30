//1.
// #include<stdio.h>
// int main() {                                                                    //outpot-
//     int n;                                                                        //  *
//     printf("Enter a number: ");                                                   //  * *
//     scanf("%d",&n);                                                              //   * * *
//                                                                                   //  * * * *
//     for(int row=1;row<=n;row++) {
//         for(int col=1;col<=row;col++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
//2.
// #include<stdio.h>
// int main() {                                                                //output-
//     int n;                                                                  // * * * *
//     printf("Enter a number: ");                                            //  * * * *
//     scanf("%d",&n);                                                        //  * * * *
//                                                                             // * * * *
//     for(int row=1;row<=n;row++) {
//         for(int col=1;col<=n;col++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
//3.
// #include<stdio.h>
// int main() {                                                            //output-
//     int n;                                                              //* * * *
//     printf("Enter a number: ");                                        // * * *
//     scanf("%d",&n);                                                    // * *
//                                                                        // *
//     for(int row=1;row<=n;row++) {
//         for(int col=1;col<=n-row+1;col++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
//4.
// #include<stdio.h>
// int main() {                                                            //output-
//     int n;                                                               // 1
//     printf("Enter a number: ");                                          // 1 2
//     scanf("%d",&n);                                                      // 1 2 3
//                                                                         //  1 2 3 4
//     for(int row=1;row<=n;row++) {
//         for(int col=1;col<=row;col++) {
//             printf("%d",col);
//         }
//         printf("\n");
//     }
// }
//5.
// #include<stdio.h>
// int main() {
//     int n;                                                              //output-
//     printf("Enter a number: ");                                         //*
//     scanf("%d",&n);                                                    // * *
//                                                                         //* * *
//     for(int row=1;row<=n;row++) {                                      // * * * *
//         for(int col=1;col<=row;col++) {                                // * * *
//             printf("*");                                               // * *
//         }                                                              // *
//         printf("\n");
//     }
//     for (int rev=1;rev<=n;rev++) {
//         for(int x=1;x<=n-rev;x++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
//6.
// #include<stdio.h>
// int main() {                                                                //output-
//     int n;                                                                  //     *
//     printf("Enter a number: ");                                            //    * *
//     scanf("%d",&n);                                                        //  * * *
//                                                                          //  * * * *
//     for(int row=1;row<=n;row++) {
//         for(int col=1;col<=n-row;col++) {
//             printf("  ");
//         }
//         for (int rev=1;rev<=row;rev++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
//7.
// #include<stdio.h>
// int main() {                                                             //output-
//     int n;                                                               // * * * *
//     printf("Enter a number: ");                                          //   * * *
//     scanf("%d",&n);                                                      //     * *
//                                                                          //       *
//     for(int row=0;row<=n-1;row++) {
//         for(int col=1;col<=row;col++) {
//             printf("  ");
//         }
//         for (int rev=1;rev<=n-row;rev++) {
//             printf("* ");
//         }
//             printf("\n");
//         }
//     }
//8.
// #include<stdio.h>
// int main() {
//     int n;                                                                  //output-
//     printf("Enter a number: ");                                     //      *
//     scanf("%d",&n);                                                //     * * *
//                                                                  //     * * * * *
//     for(int row=1;row<=n;row++) {                                //   * * * * * * *
//         for(int col=1;col<=n-row;col++) {
//             printf("  ");
//         }
//         for (int rev=1;rev<=row;rev++) {
//                 printf("* ");
//             }
//         for (int y=1;y<=row-1;y++) {
//             printf("* ");
//         }
//             printf("\n");
//     }
// }
//9.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int row=0;row<=n-1;row++) {
        for(int col=1;col<=row;col++) {
            printf("  ");
        }
        for (int rev=1;rev<=n-row;rev++) {
                printf("* ");
            }
        for (int y=1;y<=n-row+1;y++) {
            printf("* ");
        }
            printf("\n");
    }
}

