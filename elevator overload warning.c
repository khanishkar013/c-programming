#include<stdio.h>

int main() {
    int max_weight,n,pass_weight;
    int count=0,i=1,total=0,final=0;

    scanf("%d %d",&max_weight,&n);

    while (i<=n) {
        scanf("%d",&pass_weight);

        if (total+pass_weight<max_weight) {
            count++;
            total=total+pass_weight;
        }
        final=final+pass_weight;
        i++;
    }
    printf("Passengers Allowed:%d\n",count);
    if (final>max_weight) {
        printf("Overload: Yes");
    }
    else {
        printf("Overload: No");
    }
    return 0;
}