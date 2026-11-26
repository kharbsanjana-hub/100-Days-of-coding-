#include <stdio.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum status s = FAILURE;

    if(s == SUCCESS)
        printf("Operation successful");
    else if(s == FAILURE)
        printf("Operation failed");
    else if(s == TIMEOUT)
        printf("Operation timed out");

    return 0;
}