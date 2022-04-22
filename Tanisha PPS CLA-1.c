#include<stdio.h>

int main()
{
    char y = 'a';
    int a = 12;
    signed char r;
    long long int b;
    long double s;
    short d;
    unsigned int x = 75;
    unsigned long int e;
    float z;
    double c = 5.04;
    printf("The size of char data type is %d.\n", sizeof(y));
    printf("The size of int data type is %d. \n", sizeof(a));
    printf("The size of double data type is %d.\n", sizeof(c));
    printf("The size of long long int type is %d. \n", sizeof(b));
    printf("The size of long double data type is %d. \n", sizeof(s));
    printf("The size of short data type is %d. \n", sizeof(d));
    printf("The size of unsigned int is %d. \n", sizeof(x));
    printf("The size of unsigned long int e is %d. \n", sizeof(e));
    printf("The size of signed char is %d. \n", sizeof(r));
    printf("The size of float data type is %d. \n", sizeof(z));

    return 0;

}
© 2022 GitHub, Inc.