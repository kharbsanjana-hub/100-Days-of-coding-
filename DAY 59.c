#include <stdio.h>

int main() {
    int n, k, a[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    int max = 0;

    for(int i = 0; i <= n - k; i++) {
        int sum = 0;

        for(int j = i; j < i + k; j++)
            sum += a[j];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}