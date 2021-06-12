#include "helper.h"

char* initDefaultString(){
    char* strPtr = malloc(sizeof(char));
    strcpy(strPtr, "\0");
    return strPtr;
}

void setStr(char** strPtr, char* newStr){
    free(*strPtr);
    unsigned int length = strlen(newStr);
    *strPtr = malloc(sizeof(char)*length + 1);
    strcpy(*strPtr, newStr);
    (*strPtr)[length] = '\0';
}