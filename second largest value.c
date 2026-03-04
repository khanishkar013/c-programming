#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int i;
    for ( i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int max;
    for(int j=0;j<size;j++) {
        if(max<arr[j]) {
            max=arr[j];
        }
    }
    int sec_max=arr[0];
    for (int i = 0; i < size; i++) {
        if (sec_max < arr[i]) {
            sec_max = arr[i];
        }
    }
    printf("%d\n",sec_max);
    return 0;
}