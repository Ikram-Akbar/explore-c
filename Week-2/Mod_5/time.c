#include <stdio.h>

int main() {
    int N, M;
    printf("Enter the start time (N): ");
    scanf("%d", &N);
    printf("Enter the end time (M): ");
    scanf("%d", &M);

    if(N < 0 || N > 24 || M < 0 || M > 24) {
        printf("Invalid input. Please enter time in 24 hours format.\n");
        return 0;
    }

    printf("Hours from %d to %d are: ", N, M);
    while(N != M) {
        printf("%d ", N);
        N = (N + 1) % 24;
    }
    printf("%d\n", M);
}
//
