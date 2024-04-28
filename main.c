/*
 *   Copyright (c) 2024 
 *   All rights reserved.
 */
#include <stdio.h>


int AddValue(int a, int b, int *p)
{
    a = 20;
    *p = a;
    return(a + b);
}
int main()
{
    int a =  10;
    int b = 15;
    int result;
    int *p;
    p = &a;

    result = AddValue(a, b, p);

    printf("%d \n", result);
    printf("%d \n", a);
    return 0;
}