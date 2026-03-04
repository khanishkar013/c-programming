#include <ctype.h>
#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int x;
    int count=0;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++) {
        if (x==arr[i]) {
            count++;
        }
    }
    printf("%d\n",count);
}