#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    
    while(1) {
        if((c=getchar()) == EOF) break;
        if (97 <= c && c <= 122) 
            c -= 32;
        putchar(c);
    }
    return 0;
}