#include <stdio.h>

int main() {
    int n, a[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int sum = a[0];
    int max = a[0];

    for(int i = 1; i < n; i++) {
        if(sum + a[i] > a[i])
            sum = sum + a[i];
        else
            sum = a[i];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}