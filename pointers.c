#include <stdio.h>
int add(int a, int b){return a + b; }
int mul(int a, int b){return a * b; }
int main(void){
    int(*op)(int, int);
    op =add;
    printf("add(3,4) =%d\n",op(3, 4));
    op =mul;
    printf("mul(3,4) =%d\n",op(3, 4));
    int (*ops[])(int, int) = {add,mul};
    printf("*ops[0](3, 4) = %d\n",ops[0](3, 4));
    printf("*ops[1](3, 4) = %d\n",ops[1](3, 4));
    return 0;
}