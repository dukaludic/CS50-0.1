#include <stdio.h>

// Prototype / hint
void meow(void);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++){
       printf("meow\n");
    }
}