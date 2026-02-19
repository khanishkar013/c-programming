#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int k=4;k>0;k--) {
        for (int s=1;s<=k;s++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}