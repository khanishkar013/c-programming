#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int count=0;
    for (;a!=0;a/=10) {
        count++;
    }
    printf("%d\n",count);
    return 0;
}