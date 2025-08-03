#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};

void printStudent(struct Student student);

int main() {

    struct Student student1 = {"Spongebob", 30, 3.2, true};
    struct Student student2 = {"Patrick", 24, 1.2, false};
    struct Student student3 = {"Squidward", 32, 3.0, false};
    struct Student student4 = {"Sandy", 27, 3.8, true};
    struct Student student5 = {0};

    strcpy(student5.name, "Mr.Krabs");
    student5.age = 51;
    student5.gpa = 2.9;
    student5.isFullTime = false;

    printStudent(student1);

    return 0;
}

void printStudent(struct Student student) {
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}