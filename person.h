#include "helper.h"

typedef struct PERSON{
    char* firstName;
    char* lastName;

    int age;
    char* phoneNumber;

    char* (*getFirstName)(struct PERSON*);
    struct PERSON* (*setFirstName)(struct PERSON*, char*);

    char* (*getLastName)(struct PERSON*);
    struct PERSON* (*setLastName)(struct PERSON*, char*);

    int (*getAge)(struct PERSON*);
    struct PERSON* (*setAge)(struct PERSON*, int);

    char* (*getPhoneNumber)(struct PERSON*);
    struct PERSON* (*setPhoneNumber)(struct PERSON*, char*);

    void (*print)(struct PERSON*);
} PERSON;

PERSON* construct_person();
void destruct_person(PERSON*);