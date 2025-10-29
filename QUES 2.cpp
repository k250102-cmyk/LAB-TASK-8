#include <stdio.h>

int main() {
    int year1[] = {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15};
    int year2[] = {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16};
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    printf("Year 1:\n");
    for (int i = 0; i < 12; i++) {
        printf("%s: %d photos\n", months[i], year1[i]);
    }

    printf("\nYear 2:\n");
    for (int i = 0; i < 12; i++) {
        printf("%s: %d photos\n", months[i], year2[i]);
    }

    return 0;
}

