#include <stdio.h>
#include <nobit.h>

int main(void)
{
    unsigned int a = 0xFF00;
    unsigned int b = 0x00FF;
    unsigned int r1;
    unsigned int r2;
    printf("TESTING OR\n");
    r1 = or_ui(a, b);
    r2 = a | b;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");

    printf("TESTING XOR\n");
    r1 = xor_ui(a, b);
    r2 = a ^ b;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");

    printf("TESTING AND\n");
    r1 = and_ui(a, b);
    r2 = a & b;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");

    printf("TESTING NOT\n");
    r1 = not_ui(a);
    r2 = ~a;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");
}