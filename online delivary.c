#include <stdio.h>
int main() {
    int speedtype,orderamount;
    scanf("%d%d",&speedtype,&orderamount);
    switch (speedtype) {
        case 1:
            int amount=50;
            printf("%d",amount);
            break;
        case 2:
            int amount1=100;
            if (orderamount<1000) {
                printf("%d",amount1);
            }
            break;
    }
    return 0;
}