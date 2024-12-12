#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3;
    
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);
    
    int aliceScore = A1 + A2 + A3 - (A1 < A2 ? (A1 < A3 ? A1 : A3) : (A2 < A3 ? A2 : A3));
    
    int bobScore = B1 + B2 + B3 - (B1 < B2 ? (B1 < B3 ? B1 : B3) : (B2 < B3 ? B2 : B3));
    
    if (aliceScore > bobScore) {
        printf("Alice\n");
    } else if (bobScore > aliceScore) {
        printf("Bob\n");
    } else {
        printf("Tie\n");
    }

    return 0;
}
