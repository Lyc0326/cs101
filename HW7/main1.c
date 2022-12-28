#include <stdio.h>

int main() {
    int n = 7;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i + 1; j++)
            if (j < n - i)
                printf(" ");
            else if ((j - n + i) % 2)
                printf(" ");
            else
                printf("%d", i + 1);
        printf("\n");
    }
    return 0;
}

