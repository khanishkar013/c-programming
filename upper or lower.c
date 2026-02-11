#include<conio.h>
#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if (a>='a' && a<='z') {
        printf("lower case");
    }
    else {
        printf("upper case");
    }
    return 0;
}
