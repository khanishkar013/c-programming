#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d\n",&a,&b);
    char x;
    scanf("%c",&x);
    switch(x) {
        case '+':
            printf("Sum =%d",a+b);
            break;
    }
    return 0;
}