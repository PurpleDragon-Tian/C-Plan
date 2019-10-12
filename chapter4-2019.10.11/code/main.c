
#include <stdio.h>

int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(int arg, char *argv[]){\
    int result = 0;
    result = sum(4, 1);
    printf("the result is %d \n", result);
    return 0;
}

