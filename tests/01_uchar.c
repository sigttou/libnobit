#include <stdio.h>
#include <nobit.h>

int main(void)
{
    unsigned char a = 0xF0;
    unsigned char b = 0x0F;
    unsigned char r1;
    unsigned char r2;
    printf("TESTING OR\n");
    r1 = or_uc(a, b);
    r2 = a | b;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");

    printf("TESTING XOR\n");
    r1 = xor_uc(a, b);
    r2 = a ^ b;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");

    printf("TESTING AND\n");
    r1 = and_uc(a, b);
    r2 = a & b;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");

    printf("TESTING NOT\n");
    r1 = not_uc(a);
    r2 = ~a;
    if(r1 == r2)
        printf("OK!\n");
    else
        printf("FAIL!\n");
}