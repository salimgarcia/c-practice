#include <stdio.h>
#include <stdlib.h>

// person structure with age integer
struct sPerson {
    int age;
};

struct sPerson *getNewPerson(const int age) {
    
    // create new person
    struct sPerson *newPerson = NULL;
    
    // allocate memory
    newPerson = malloc(sizeof(struct sPerson));
    
    // set age of person according to input
    newPerson->age = age;
    
    // print memory address of new person
    printf("Created new person at %p\n", newPerson);
    
    // return memory address
    return newPerson;
}

void printPerson(const struct sPerson *person, const char *comment) {
    
    // if given memory address *person is null, print error
    if (person == NULL) {
        printf("%s is NULL\n", comment);
    }

    else {
        printf("%s: age:%d address:%p\n", comment, person->age, person);
    }
}

int main() {
    
    struct sPerson *first = NULL;
    struct sPerson *second = NULL;

    printPerson(first, "first");
    printPerson(second, "second");

    first = getNewPerson(125);
    second = getNewPerson(100);

    printPerson(first, "first");
    printPerson(second, "second");

    free(first);
    free(second);

    first = NULL;
    second = NULL;

    return 0;
}