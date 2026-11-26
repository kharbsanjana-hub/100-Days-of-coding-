#include <stdio.h>

int main() {
    int n, k, a[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int neg = 0;

        for(int j = i; j < i + k; j++) {
            if(a[j] < 0) {
                neg = a[j];
                break;
            }
        }

        printf("%d ", neg);
    }

    return 0;
}