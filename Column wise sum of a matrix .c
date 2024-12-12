#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N][M];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
   
    int column_sum[M];
    for (int j = 0; j < M; j++) {
        column_sum[j] = 0;
    }
    

    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            column_sum[j] += matrix[i][j];
        }
    }
    
  
    for (int j = 0; j < M; j++) {
        printf("%d ", column_sum[j]);
    }
    printf("\n");
    
    return 0;
}
