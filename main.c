#include <stdio.h>

#include "person.h"

int main() {
    PERSON* person = construct_person();
    person->setAge(person, 10);
    printf("age:%d\n", person->getAge(person));
    return 0;
}