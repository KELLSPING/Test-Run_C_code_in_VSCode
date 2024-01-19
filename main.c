#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(){
    printf("hello c\n");

    int add_result = add(1, 2);
    printf("add_result : %d\n", add_result);

    return 0;
}