#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int reverse=0;
    for (;n!=0;n/=10) {
        int rem;
        rem = n%10;
        reverse = reverse*10+rem;
    }
    printf("%d",reverse);
    return 0;
}