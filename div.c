#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
float divide(int first_element, int two_element) {
    if(two_element == 0) // If the divider is zero
    {
        perror("Error function subtract:Division by zero.\n");
        exit(1);
    }
    else
    {
        return first_element / two_element;
    }
}