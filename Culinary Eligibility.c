#include <stdio.h>

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
   if (4 * y >= 3 * x) {
        printf("ELIGIBLE\n");
    } else {
        printf("NOT ELIGIBLE\n");
    }
    
    return 0;
}
