#include "stdio.h"
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
int main(){
    uint8_t a = 1;
    printf("size int %d", sizeof(a));
    return 0;
}