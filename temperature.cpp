#include <stdio.h>

int main() {
    int temp[4][4];
    int i, j;
    int cold = temp[0][0];
    int cold_i = 0;
    int cold_j = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &temp[i][j]);
        }
        printf("\n");
    }

    cold = temp[0][0];
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (temp[i][j] < cold) {
                cold = temp[i][j];
                cold_i = i;
                cold_j = j;
            }
        }
            printf("(%d,%d) with temperature %d ", cold_i, cold_j, cold);
    }

}
