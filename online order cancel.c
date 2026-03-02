#include<stdio.h>

int main() {
    int n,N,count=0,order=0;
    scanf("%d",&n);

    while (n>0) {
        scanf("%d",&N);
        if (N==0) {
            count++;
        }
        else if (N==1) {
            order++;
        }
        n--;
    }
    printf("Successful:%d\n",order);
    printf("Cancelled: %d\n",count);
    if (order>=count) {
        printf("Status: Safe");
    }
    else {
        printf("Status: Risk");
    }
    return 0;
}