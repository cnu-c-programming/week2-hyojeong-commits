#include <stdio.h>

int main()
{
char x = 127;
    x = x + 1;
    printf("%d\n", x);  // -128 출력 (wrap-around)
    return 0;
}

