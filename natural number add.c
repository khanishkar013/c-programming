#include<conio.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum;
    for (int i=1; i<=n; i++) {
        sum += i;
        //printf("%d\n",sum);
    }
    printf("%d",sum);
    return 0;
}
