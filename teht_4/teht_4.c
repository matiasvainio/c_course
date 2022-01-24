#include <stdio.h>

void main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p1, *p2;
    p1 = arr;
    p2 = &arr[(sizeof(arr) - 1) / sizeof(arr[0])];

    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) / 2; i++) {
    //     printf("%d \n", *p);
    //     *p += 1;
    // }

    while (p1 - 1 != p2) {
        scanf("%d", p1);
        p1 += 2;
    }
    printf("\n");

    p1 = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", *p1);
    }
    printf("\n");

    p1 = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%p ", p1);
        p1++;
    }
}