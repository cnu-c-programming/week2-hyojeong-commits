#include <stdio.h>

int main()
{
    int x, y;
    char op;

    scanf("%d %d %c", &x, &y, &op);

    if (op == '+') printf("%d\n", x + y);
    else if (op == '-') printf("%d\n", x - y);
    else if (op == '*') printf("%d\n", x * y);
    else if (op == '/') {
        if (y != 0) printf("%d\n", x / y);
        else printf("division by zero\n");
    }
    return 0;
}

