#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=1;j<=5-i;j++) {
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int s=5;s>0;s--) {
        for (int p=1;p<=5-s;p++) {
            printf(" ");
        }
        for (int v=1;v<=2*s-1;v++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}