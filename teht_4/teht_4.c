#include <stdio.h>

void main() {
    int arr[10] = {0};
    int *p1, *p2;
    p1 = arr;
    p2 = &arr[(sizeof(arr) - 1) / sizeof(arr[0])];

    printf("%s\n", "Syötä lukuja:");
    while (p1 - 1 != p2) {
        scanf("%d", p1);
        p1 += 2;
    }
    printf("\n");

    p1 = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", *p1);
        p1++;
    }
    printf("\n");

    p1 = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%p ", p1);
        p1++;
    }
}