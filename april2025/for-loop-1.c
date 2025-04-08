
//pattern_loops.c - Demonstrates interesting for loop applications

#include <stdio.h>

int main() {
    int i, j, height = 5;
    
    printf("=== Pattern 1: Right Triangle ===\n");
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n=== Pattern 2: Number Triangle ===\n");
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    printf("\n=== Pattern 3: Fibonacci Sequence ===\n");
    int terms = 10;
    int first = 0, second = 1, next;
    
    printf("First %d Fibonacci numbers: ", terms);
    for (i = 0; i < terms; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    
    printf("\n=== Pattern 4: Counting with Step Value ===\n");
    for (i = 0; i <= 20; i += 4) {
        printf("%d ", i);
    }
    printf("\n");
    
    printf("\n=== Pattern 5: Diamond Pattern ===\n");
    int space, rows = 5;
    
    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
