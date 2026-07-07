#include <stdio.h>
#include <stdint.h>
struct demo 
{
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

    printf("size(struct demo) =%zu\n",sizeof(s));
    printf("offsetof(a) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, a), (void*)&s.a);
    printf("offsetof(b) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, b), (void*)&s.b);
    printf("offsetof(c) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, c),(void*)&s.c);
    printf("offsetof(d) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, d),(void*)&s.d);
    printf("offsetof(e) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, e),(void*)&s.e);
    printf("offsetof(f) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, f), (void*)&s.f);
    printf("offsetof(g) = %zu, adress =%p\n",
    __builtin_offsetof(struct demo, g),(void*)&s.g);
    printf("\n sum of member size = %zu\n",
    sizeof(char) + sizeof(int)+sizeof(short)+sizeof(long)+sizeof(char)+sizeof(void*)+sizeof(char));
    return 0;
}
