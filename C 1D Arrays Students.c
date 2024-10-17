// Arrays in c - 1D arrays
#include<stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int studentIDs[n];
    float grades[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter ID for student %d:", i + 1);
        scanf("%d",& studentIDs[i]);
        printf("Enter grades for student %d:\n", i + 1);
        scanf("%f",& grades[i]);
    }
    printf("Student Details:\n");
    printf("ID\tGrade\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f", studentIDs[i], grades[i]);
    }
    return 0;
}