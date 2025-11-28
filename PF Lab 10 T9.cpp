#include <stdio.h>

int Search(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return Search(arr, size, target, index + 1);
}

int main() {
    int n, target;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int result = Search(arr, n, target, 0);
    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
