#include <stdio.h>

void fun()
    {
        static int i =0;
        i++;
        printf("%d" ,i);
    }
    int main()
    {
        fun();
        fun();
    }