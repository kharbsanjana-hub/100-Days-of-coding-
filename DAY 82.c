#include <stdio.h>

enum light { RED, YELLOW, GREEN };

int main() {
    enum light signal = GREEN;

    if(signal == RED)
        printf("Stop");
    else if(signal == YELLOW)
        printf("Wait");
    else if(signal == GREEN)
        printf("Go");

    return 0;
}