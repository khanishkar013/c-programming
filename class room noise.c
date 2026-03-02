#include<stdio.h>

int main() {
    int n,noise_level,i=1;
    int count=0,streak=0,longest=0;
    scanf("%d",&n);

    while (i<n) {
        scanf("%d",&noise_level);
        if (noise_level>70) {
            count=count+1;
            streak=streak+1;
            if (streak>longest) {
                longest=streak;
            }
        }else {
            streak=0;
        }
        i++;
    }
    printf("Noise Violation:%d\n",count);
    printf("Longest Violation Streak:%d\n",longest);
    return 0;
}