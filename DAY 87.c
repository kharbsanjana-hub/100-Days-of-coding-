#include <stdio.h>

enum role { ADMIN, USER, GUEST };

int main() {
    enum role r = GUEST;

    if(r == ADMIN)
        printf("Welcome Admin!");
    else if(r == USER)
        printf("Welcome User!");
    else if(r == GUEST)
        printf("Welcome Guest!");

    return 0;
}