#include "person.h"

char* getFirstName(PERSON*);
PERSON* setFirstName(PERSON*, char*);

char* getLastName(PERSON*);
PERSON* setLastName(PERSON*, char*);

int getAge(PERSON*);
PERSON* setAge(PERSON*, int);

char* getPhoneNumber(PERSON*);
PERSON* setPhoneNumber(PERSON*, char*);

void printPerson(PERSON*);

PERSON* construct_person(){
    PERSON* p = (PERSON*)malloc(sizeof(PERSON));

    p->firstName = initDefaultString();
    p->lastName = initDefaultString();
    p->phoneNumber = initDefaultString();
    p->age = 0;

    p->getFirstName = getFirstName;
    p->setFirstName = setFirstName;

    p->getLastName = getLastName;
    p->setLastName = setLastName;

    p->getAge = getAge;
    p->setAge = setAge;

    p->getPhoneNumber = getPhoneNumber;
    p->setPhoneNumber = setPhoneNumber;

    p->print = printPerson;
}

void destruct_person(PERSON* p){
    free(p->firstName);
    free(p->lastName);
    free(p->phoneNumber);
    free(p);
}

char* getFirstName(PERSON* self){
    return self->firstName;
}

PERSON* setFirstName(PERSON* self, char* firstName){
    setStr(&self->firstName, firstName);
    return self;
}

char* getLastName(PERSON* self){
    return self->lastName;
}

PERSON* setLastName(PERSON* self, char* lastname){
    setStr(&self->lastName, lastname);
    return self;
}

int getAge(PERSON* self) {
    return self->age;
}

PERSON* setAge(PERSON* self, int age){
    self->age = age;
    return self;
}

char* getPhoneNumber(PERSON* self){
    return self->phoneNumber;
}

PERSON* setPhoneNumber(PERSON* self, char* phoneNumber){
    setStr(&self->phoneNumber, phoneNumber);
    return self;
}

void printPerson(PERSON* self){
    printf("firstname:%s\n", self->firstName);
    printf("lastname:%s\n", self->lastName);
    printf("age:%d\n", self->age);
    printf("phone:%s\n", self->phoneNumber);
}