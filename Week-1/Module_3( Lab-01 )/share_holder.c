#include<stdio.h>

int main() {
    // Declare variables
    int X, Y, HabibShare;

    // Input X and Y
    printf("Enter the share percentage of Rahim (X): ");
    scanf("%d", &X);
    printf("Enter the share percentage of Karim (Y): ");
    scanf("%d", &Y);

    // Check if input values are within constraints
    if ((X >= 0 && Y >= 0) && (X <= 10 && Y <= 10)) {
        // Calculate the share percentage of Habib
        HabibShare = (X * Y);

        // Output the result
        printf("Habib's share of the company Zeta: %d%%\n", HabibShare);
    } else {
        // Print an error message if input values are out of bounds
        printf("Error: Input values out of bounds (0 <= X <= 10 and 0 <= Y <= 10)\n");
    }

    return 0;
}
