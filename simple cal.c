#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d\n",&a,&b);
    char op;
    scanf("%c",&op);
    switch (op) {
        case '+':
            printf("RESULT=%d",a+b);
            break;
    }
    return 0;
}