#include <stdio.h>

int main() {
    int i;
    char menu[5][10] = {
        "init",
        "open",
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 5; i++)
        printf("%d번째 메뉴: %s\n", i, menu[i]);

    return 0;
}