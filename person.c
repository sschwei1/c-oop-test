#include "person.h"

char* getFirstName(PERSON*);
PERSON* setFirstName(PERSON*, char*);

char* getLastName(PERSON*);
PERSON* setLastName(PERSON*, char*);

int getAge(PERSON*);
PERSON* setAge(PERSON*, int);

char* getPhoneNumber(PERSON*);
PERSON* setPhoneNumber(PERSON*, char*);

PERSON* construct_person(){
    PERSON* p = (PERSON*)malloc(sizeof(PERSON));

    p->firstName = initDefaultString();
    p->lastName = initDefaultString();
    p->phoneNumber = initDefaultString();
    p->age = 0;

    p->getAge = getAge;
    p->setAge = setAge;
}

void destruct_person(PERSON* p){
    free(p->firstName);
    free(p->lastName);
    free(p->phoneNumber);
    free(p);
}

int getAge(PERSON* self) {
    return self->age;
}

PERSON* setAge(PERSON* self, int age){
    self->age = age;

    return self;
}