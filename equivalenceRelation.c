#include <stdio.h>
int d[5][5];
int reflectionCheck;
int symmetryCheck;
int transitionCheck;
int main() {
    d[1][1] = d[1][2] = d[2][1] = d[2][2] = d[3][3] = d[4][4] = 1;
    
    printf("<현재 상태>\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

    printf("\n<반사성 확인>\n");
    for (int i = 1; i <= 4; i++) {
        printf("d[%d][%d] = %d\n", i, i, d[i][i]);
        if (d[i][i] != 1) reflectionCheck = 1;
    }
    if (reflectionCheck == 0) printf("\n반사성 O\n\n");
    else printf("\n반사성 X\n\n");

    printf("<대칭성 확인>\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = i; j <= 4; j++) {
            if (d[i][j] == 0 && d[j][i] == 0) continue;
            printf("d[%d][%d] == d[%d][%d] = %d\n", i, j, j, i, (d[i][j] == d[j][i]) && d[i][j] != 0);
            if (((d[i][j] == d[j][i]) && d[i][j] != 0) == 0) symmetryCheck = 1;
        }
    }
    if (symmetryCheck == 0) printf("\n대칭성 O\n\n");
    else printf("\n대칭성 X\n\n");

    printf("<추이성 확인>\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            for (int l = 1; l <= 4; l++) {
                if ((i == j && j == l) || (d[i][j] != 1 || d[j][l] != 1)) continue;
                printf("d[%d][%d] = %d, d[%d][%d] = %d, d[%d][%d] = %d\n", i, j, d[i][j], j, l, d[j][l], i, l, d[i][l]);
                if (d[i][l] != 1) transitionCheck = 1;
            }
        }
    }
    if (symmetryCheck == 0) printf("\n추이성 O\n\n");
    else printf("\n추이성 X\n\n");

    if (reflectionCheck == symmetryCheck == transitionCheck == 0) printf("관계 R은 동치관계입니다.\n");
    else printf("관계 R은 동치관계가 아닙니다.\n");
    return 0;
}