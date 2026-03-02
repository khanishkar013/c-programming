#include<stdio.h>

int main() {
    int n,ini_bal,N,total=0,final,count=0;
    scanf("%d %d",&n,&ini_bal);


    while (n>0) {
        scanf("%d",&N);
        total=total+N;
        if (N<2000 && N>0) {
            count++;
        }
        n--;
    }
    final=ini_bal+total;
    printf("Final Balance: %d\n",final);
    printf("Low Balance Days: %d",count);
    return 0;
}