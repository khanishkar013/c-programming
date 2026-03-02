#include<stdio.h>

int main() {
    int tot_data,n,data_usage;
    int f=0,count=0,total=0,final;
    scanf("%d %d",&tot_data,&n);

    while (n>0) {
        scanf("%d",&data_usage);
        total=total+data_usage;
        if (f<tot_data) {
            count++;
            f=f+data_usage;
        }
        n--;
    }
    printf("Days Used:%d\n",count);

    if (f<tot_data) {
        final=tot_data-total;
        printf("Remaining data: %dGB\n",final);
    }
    else {
        printf("Remaining data: 0GB\n");
    }

    return 0;
}