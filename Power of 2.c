#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int N) {
    return (N > 0) && ((N & (N - 1)) == 0);
}

int main() {
    int N;
    scanf("%d", &N);

    if (isPowerOfTwo(N)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}