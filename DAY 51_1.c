#include <stdio.h>

// Function to find the first occurrence of target
int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; // Keep searching in the left half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence of target
int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; // Keep searching in the right half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;
    
    // Input size of the array
    scanf("%d", &n);
    int nums[n];
    
    // Input elements of the sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Input target element
    scanf("%d", &target);
    
    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);
    
    printf("%d,%d\n", first, last);
    
    return 0;
}
