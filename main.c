#include "person.h"

int main() {
    PERSON* person = construct_person();
    person->setFirstName(person, "test");
    person->setAge(person, 10);
    person->print(person);
    destruct_person(person);

    return 0;
}
