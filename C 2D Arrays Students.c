// Arrays in C - 2D Arrays
#include <stdio.h>

#define ID_COLUMN 0
#define GRADE_COLUMN 1

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    float studentData[n][2];
    // 2D array to store IDs and grades

    for (int i = 0; i < n; i++) {
        printf("Enter ID for student %d:", i + 1);
        scanf("%f",& studentData[i][ID_COLUMN]);
        printf("Enter grade for student %d:\n", i + 1);
        scanf("%f",& studentData[i][GRADE_COLUMN]);
    }
    // Display student details
    printf("\nStudent Details:\n");
    printf("ID\tGrade\n");
    for (int i = 0; i < n; i++) {
        printf("%.0f\t%.2f\n", studentData[i][ID_COLUMN], studentData[i][GRADE_COLUMN]);
    }
    return 0;
}
