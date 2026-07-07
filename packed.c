#include <stdio.h>
struct __attribute__((packed)) demo{
    char a;
    int b;
    short c;
    long d;
    char e;
    void *f;
    char g;
};
int main(void){
    struct demo s = {0};
    printf("sizeof(struct demo) = %zu\n", sizeof(s));
    printf("&a = %p\n", (void*)&s.a);
    printf("&b = %p\n", (void*)&s.b);
    printf("&c = %p\n", (void*)&s.c);
    printf("&d = %p\n", (void*)&s.d);
    printf("&e = %p\n", (void*)&s.e);
    printf("&f = %p\n", (void*)&s.f);
    printf("&g = %p\n", (void*)&s.g);
    return 0;
} 
/*__attribute__((packed)) removes all compiler-inserted padding,
reducing struct size from 48 to 25 bytes but forcing
unaligned member access that may crash on non-x86 architectures.*/