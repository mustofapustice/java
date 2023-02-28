#include <stdio.h>
int main() {
    int i,j, roll, num_students;
    float marks[5], cgpa, total_marks = 0.0;
    char name[50];

    // get number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // create a file and write student data
    FILE *fptr;
    fptr = fopen("students.txt", "w");

    for (i = 0; i < num_students; i++) {
        // get student information
        printf("\nStudent %d:\n", i+1);
        printf("\nEnter student name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);

        // get marks of 5 subjects
        total_marks = 0.0;
        for (j = 0; j < 5; j++) {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%f", &marks[j]);
            total_marks += marks[j];
        }

        // calculate CGPA
        cgpa = total_marks / 50;

        // write student data to file
        fprintf(fptr, "Name: %s\n", name);
        fprintf(fptr, "Roll: %d\n", roll);
        fprintf(fptr, "Marks: ");
        for (j = 0; j < 5; j++) {
            fprintf(fptr, "%.2f ", marks[j]);
        }
        fprintf(fptr, "\n");
        fprintf(fptr, "CGPA: %.2f\n\n", cgpa);
    }

    fclose(fptr);
    printf("\nStudent data written to file.\n");

    // reopen the file for reading
    fptr = fopen("students.txt", "r");

    // read and print student data
    printf("\nStudent data:\n\n");
    char c;
    while ((c = getc(fptr)) != EOF) {
        printf("%c", c);
    }

    fclose(fptr);
    printf("\n");

    return 0;
}
