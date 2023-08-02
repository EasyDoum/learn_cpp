# include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
    printf("Hello World !!!\n");

    int a = 9;
    int b = 8;
    int c;
    c = a+b;
    printf("a + b = %d\n",c);
    c = a-b;
    printf("a - b = %d\n",c);
    c = a*b;
    printf("a * b = %d\n",c);
    c = a/b;
    printf("a / b = %d\n",c);



    return 0;
}