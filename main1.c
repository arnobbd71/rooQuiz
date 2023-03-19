#include <stdio.h>

void makeSquares(int N, int M) {
    int minSide = N < M ? N : M;
    int maxSide = N > M ? N : M;

    while (minSide > 0) {
        int numSquares = maxSide / minSide;
        for (int i = 0; i < numSquares; i++) {
            printf("%d ", minSide);
        }
        maxSide = maxSide % minSide;
        int temp = maxSide;
        maxSide = minSide;
        minSide = temp;
    }

    printf("\n");
}

int main() {
    int N, M;
    printf("Enter the size of the rectangular piece of paper: ");
    scanf("%d %d", &N, &M);
    makeSquares(N, M);
    return 0;
}
