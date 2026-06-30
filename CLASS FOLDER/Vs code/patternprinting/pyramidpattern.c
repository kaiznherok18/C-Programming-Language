//1.
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of rows and columns : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            printf("  ");
        }

        for(int k=1; k<=i; k++) {
            printf("X ");
        }
        for(int y=1; y<i; y++) {
            printf("X ");
        }
        printf("\n");
    }
}
