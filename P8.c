#include <stdio.h>
int linearSearch(int arr[], int size, int target, int currentIndex) {
    
    if (currentIndex >= size) {
        return -1; 
    }
    if (arr[currentIndex] == target) {
        return currentIndex;
    }

    
    return linearSearch(arr, size, target, currentIndex + 1);
}

int main() {
    int arr[] = {5, 2, 9, 3, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    
    int result = linearSearch(arr, size, target, 0);

    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
