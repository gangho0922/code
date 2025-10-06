#include <stdio.h>

int main() {
    char name[100], afterWordFind[100];
    int x, cnt = 0, result = 0, k = 0, WordsNumber = 0;
    printf("이름을 입력하시오 : ");
    scanf("%s", name);
    getchar();
    
    printf("비교할 문자를 입력하시오 : ");
    x = getchar();

    printf("같은 문자의 위치 : ");
    while(name[cnt] != '\0') {
        
        if (x == name[cnt]) printf("name[%d] ", cnt);
        cnt++;
    }
    
    printf("\n글자수 : %d\n", cnt);
    cnt = 0;
    while(name[cnt] != '\0') {
        if (k == 0) {
            if (x == name[cnt]) {
                k = 1;
                afterWordFind[result++] = name[cnt];
            }
        }
        else afterWordFind[result++] = name[cnt];
        cnt++;
    }
    afterWordFind[result] = '\0';
    
    printf("찾은 문자부터의 문자 : ");
    printf("%s\n", afterWordFind);
    return 0;
}