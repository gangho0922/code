#include <stdio.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point p1 = {10, 20};
    struct point p2 = {30, 40};

    p2 = p1;
    // if (p1 == p2) {
    //     printf("p1과 p2는 같습니다");
    // }
    // 이렇게 하며 오류 발생

    if ((p1.x == p2.x) && (p1.y == p2.y)) {
        printf("p1과 p2는 같습니다");
    }
    //올바른 비교 방법
    return 0;
}