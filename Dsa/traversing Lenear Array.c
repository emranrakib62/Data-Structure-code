#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
     int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
}
    printf("After traversing:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
