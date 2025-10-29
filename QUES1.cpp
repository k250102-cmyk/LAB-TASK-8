#include <stdio.h>

int main() {
    int class1[] = {85, 92, 78, 90};
    int class2[] = {88, 76, 95, 84};
    int class3[] = {90, 85, 88, 92};
    int n = 4;
    float avg_class1 = 0, avg_class2 = 0, avg_class3 = 0;
    for (int i = 0; i < n; i++) {
        avg_class1 += class1[i];
        avg_class2 += class2[i];
        avg_class3 += class3[i];
    }
    avg_class1 /= n;
    avg_class2 /= n;
    avg_class3 /= n;

    printf("Class 1: %.2f\n", avg_class1);
    printf("Class 2: %.2f\n", avg_class2);
    printf("Class 3: %.2f\n", avg_class3);

    return 0;
}

