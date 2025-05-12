#include <stdio.h>
#define n 1000
int main() {
    long int matrix[n][n];
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1;
        }
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
