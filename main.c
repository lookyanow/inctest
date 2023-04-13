#include <stdio.h>
#include "funcs.h"

int main (void){
    int p;
    p = getmypid();
    printf("My pid is: %d\n", p);
}