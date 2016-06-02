/*
 * Rhys Powell
 * CEG 4350 Summer 2016
 * Lab 1: VirtualBox, Linux, gcc, and Pointers
 */

#include <stdio.h>

/*
 * Main Method
 * This method creates a couple variables and pointers,
 * then prints the various details out about the variables,
 * pointers, addresses, and contents.
 */
int main()
{
    int a = 5;
    short b = 10;
    char c = 15;
    char * d = "Hello, my name is Rhys";
    double e = 20.0;
    
    /* read these as "the int pointer aPtr is assigned the address of a" */
    int * aPtr = &a;
    short * bPtr = &b;
    char * cPtr = &c;
    char ** dPtr = &d;
    double * ePtr = &e;
    void * vPtr = aPtr;
    
    /* name type value address */
    printf("name \t\t type \t\t value \t\t address: \n");
    printf("%s \t\t %s \t\t %d \t\t %x \n", "a" ,"int", a, (int)&a);
    printf("%s \t\t %s \t\t %d \t\t %x \n", "b", "short", b, (int)bPtr);
    printf("%s \t\t %s \t\t %d \t\t %x \n", "c", "char", c, (int)cPtr);
    printf("%s \t\t %s \t %s \t %x \n", "d", "char *", d, (int)dPtr);
    printf("%s \t\t %s \t %f \t %x \n", "e", "double", e, (int)&e);
    printf("%s \t\t %s \t\t %x \t %x \n", "aPtr", "int *", (int)aPtr, (int)&aPtr);
    printf("%s \t\t %s \t %x \t %x \n", "bPtr", "short *", (int)bPtr, (int)&bPtr);
    printf("%s \t\t %s \t %x \t %x \n", "cPtr", "char *", (int)cPtr, (int)&cPtr);
    printf("%s \t\t %s \t %x \t %x \n", "dPtr", "char **", (int)dPtr, (int)&dPtr);
    printf("%s \t\t %s \t %x \t %x \n", "ePtr", "double *", (int)ePtr, (int)&ePtr);
    printf("%s \t\t %s \t %x \t %x \n", "vPtr", "void *", (int)vPtr, (int)&vPtr);
    return 0;
}