#include <stdio.h>

int main()
{
int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("false\n");
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("false\n");
            return 0;
        }
    }
    printf("true\n");
    return 0;
}

