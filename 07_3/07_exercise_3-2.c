#include <stdio.h>
int inc(int counter);

int main(void)
    {
        int i = 10;
        printf("Before calling function i=%d\n", i);
        i = inc(i);

        printf("After calling function i=%d\n", i);
        return 0;
    }

int inc(int counter)
    {
        counter++;
        return counter;
    }