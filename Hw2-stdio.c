#include <stdio.h>

int main() {
    int student_id;
    int age;

    char status;
    char confirm;
    char comment[100];

    puts("Welcome to Student Recorder");

    status = getchar();
    getchar();

    scanf("%d %d", &student_id, &age);
    getchar();

    fgets(comment, sizeof(comment), stdin);

    confirm = getchar();

    printf("Status Code : %c\n", status);
    printf("Student ID : %10d\n", student_id);
    printf("Age : %-10d\n", age);
    printf("Comment : %s", comment);
    printf("Confirmation : ");

    putchar(confirm);
    printf("\n");

    return 0;
}
