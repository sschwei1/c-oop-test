#include "helper.h"

char* initDefaultString(){
    char* strPtr = (char*)malloc(sizeof(char));
    strcpy(strPtr, "\0");
    return strPtr;
}