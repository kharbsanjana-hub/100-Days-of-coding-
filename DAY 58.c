#include <stdio.h>

int main() {
    int n, a[100], ans[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        ans[i] = 1;

        for(int j = 0; j < n; j++) {
            if(i != j)
                ans[i] *= a[j];
        }
    }

    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", ans[i]);

        if(i < n - 1)
            printf(",");
    }
    printf("]");

    return 0;
}