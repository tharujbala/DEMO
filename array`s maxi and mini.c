#include <stdio.h>
int main() {
    int n, i, min, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    min = max = marks[0];
    for (i = 1; i < n; i++) {
        if (marks[i] < min) min = marks[i];
        if (marks[i] > max) max = marks[i];
    }
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}
