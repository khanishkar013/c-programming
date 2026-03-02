#include<stdio.h>

int main() {
    int n,N,count=0,i=0,max=0;
    scanf("%d",&n);

    while (i<n) {
        scanf("%d",&N);
        if (N==0) {
            count++;
            if (count>max) {
                max=count;
            }
        }
        else {
            count=0;
        }
        i++;
    }
    printf("Longest Failure Streak : %d",max);
    return 0;
}