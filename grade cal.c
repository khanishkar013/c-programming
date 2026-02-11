#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=75 && a<=90) {
        printf("grade B");
    }
    else if (a>=91 && a<=100) {
        printf("grade A");
    }
    else if (a>=50 && a<=74) {
        printf("grade C");
    }
    else {
        printf("Fail");
    }
    return 0;
}