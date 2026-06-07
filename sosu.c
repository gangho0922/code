// #include <stdio.h>
// int main() {
//     int a, b, aa, bb;
//     scanf("%d %d", &a, &b);
//     aa = a;
//     bb = b;
//     while(a != b) {
//         if (a > b) {
//             printf("%d %d(=%d+%d)\n", a, b + bb, b, bb);
//             b += bb;
//         }
//         else {
//             printf("%d(=%d+%d) %d\n", a + aa, a, aa, b);
//             a += aa;
//         }
//     }
//     printf("%d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int f(int a, int b, int aa, int bb) {
//     if (a == b) return a;
//     if (a > b) {
//         printf("%d %d(=%d+%d)\n", a, b + bb, b, bb);
//         return f(a, b + bb, aa, bb);
//     }
//     else {
//         printf("%d(=%d+%d) %d\n", a + aa, a, aa, b);
//         return f(a + aa, b, aa, bb);
//     }
// }
// int main() {
//     int a, b, aa, bb;
//     scanf("%d %d", &a, &b);
//     aa = a;
//     bb = b;
//     printf("%d\n", f(a, b, aa, bb));
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int a, b, aa, bb;
//     scanf("%d %d", &a, &b);
//     while(a != b) {
//         if (a > b) {
//             printf("%d(=%d-%d) %d\n", a - b, a, b, b);
//             a -= b;
//         }
//         else {
//             printf("%d %d(=%d-%d)\n", a, b - a, b, a);
//             b -= a;
//         }
//     }
//     printf("%d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int f(int a, int b) {
//     if (a == b) return a;
//     if (a > b) {
//         printf("%d(=%d-%d) %d\n", a - b, a, b, b);
//         return f(a - b, b);
//     }
//     else {
//         printf("%d %d(=%d-%d)\n", a, b - a, b, a);
//         return f(a, b - a);
//     }
// }
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d\n", f(a, b));
//     return 0;
// }
#include <stdio.h>
int d[10001];
int main() {
    for (int i = 2; i <= 10000; i++) {
        if (d[i] != 1) {
            printf("%d ", i);
            for (int j = i; j <= 10000; j += i) {
                d[j] = 1;
            }
        }
    }
    return 0;
}

#include <stdio.h>
int d[10001];
void za(int i, int j) {
    if (i > 10000) return;
    d[i] = 1;
    za(i + j, j); 
}

void f(int i) {
    if (i > 10000) return;
    if (d[i] != 1) {
        printf("%d ", i);
        za(i, i);
    }
    f(i + 1);
}

int main() {
    f(2);
    return 0;
}