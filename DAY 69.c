#include <stdio.h>

int main() {
    int n, a[100], count[100] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if(count[a[i]] == 1) {
            printf("%d", a[i]);
            return 0;
        }

        count[a[i]]++;
    }

    return 0;
}