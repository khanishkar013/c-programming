#include<conio.h>
#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a<100 || a>999) {
        printf("number not eligible");
    }
    else {
        printf("three-digit");
    }
    return 0;
}
