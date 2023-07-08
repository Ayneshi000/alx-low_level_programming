#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    int i;
    
    // Loop through each command-line argument
    for (i = 1; i < argc; i++) {
        // Check if the argument is a positive integer
        int j;
        for (j = 0; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                // If not, print an error message and exit with status code 1
                printf("Error\n");
                return 1;
            }
        }
        // If it is a positive integer, add it to the sum
        sum += atoi(argv[i]);
    }
    
    // Print the sum
    printf("%d\n", sum);
    return 0;
}
