#include <stdio.h>
int main() {
    char buf[100];
    fgets(buf, 100, stdin); //gets_s는 맥에서 지원하지 않음, 그러니 fgets를 이용
    puts(buf);
    return 0;
}