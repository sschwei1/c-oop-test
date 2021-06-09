#include "helper.h"

typedef struct PERSON{
    char* firstName;
    char* lastName;

    int age;
    char* phoneNumber;

    char* (*getFirstName)(struct PERSON* self);
    struct PERSON* (*setFirstName)(struct PERSON* self, char*);

    char* (*getLastName)(struct PERSON* self);
    struct PERSON* (*setLastName)(struct PERSON* self, char*);

    int (*getAge)(struct PERSON* self);
    struct PERSON* (*setAge)(struct PERSON* self, int);

    char* (*getPhoneNumber)(struct PERSON* self);
    struct PERSON* (*setPhoneNumber)(struct PERSON* self, char*);
} PERSON;

PERSON* construct_person();