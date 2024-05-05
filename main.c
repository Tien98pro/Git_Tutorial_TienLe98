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

int AddValue2(int *a, int b)
{
    *a = 50;
    return (*a+b);
}

    
int main()
{
    int a =  10;
    int b = 15;
    int result;
    int result_2;
    int *p;
    p = &a;
    result = AddValue(a, b, p);

    result_2 = AddValue2(&a, b);
    printf("%d \n", result);
    printf("%d \n", result_2);

    printf("This is test git graph code");
    printf("The result is");
    printf("The value of a after = %d \n", a);
    return 0;
}