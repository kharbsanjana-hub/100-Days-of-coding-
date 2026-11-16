//Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid;
    int index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            index = mid;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(index == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", index);
    }

    return 0;
}