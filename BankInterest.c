#include <stdio.h>
int main() {
    int accounttype,years;
    scanf("%d%d",&accounttype,&years);
    switch (accounttype) {
        case 1:
            printf("Interest-3");
            break;
        case 2:
            if (years<=3) {
                printf("interest-5");
            }
            else {
                printf("interest-7");
            }
            break;
    }
    return 0;
}