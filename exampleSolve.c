#include <stdio.h>

int main() {
    int p, q, r;

    // (1) p ∧ q → q
    printf("\n(1) p ∧ q → q\n");
    printf("p q | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            int f1 = (!(p && q) || q);
            printf("%d %d |  %d\n", p, q, f1);
        }
    }

    // (2) ~(p ∨ ~q)
    printf("\n(2) ~(p ∨ ~q)\n");
    printf("p q | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            int f2 = !(p || !q);
            printf("%d %d |  %d\n", p, q, f2);
        }
    }

    // (3) ~(~p ∨ ~q)
    printf("\n(3) ~(~p ∨ ~q)\n");
    printf("p q | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            int f3 = !((!p) || (!q));
            printf("%d %d |  %d\n", p, q, f3);
        }
    }

    // (4) (p ∧ q) ∧ ~p
    printf("\n(4) (p ∧ q) ∧ ~p\n");
    printf("p q | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            int f4 = (p && q) && (!p);
            printf("%d %d |  %d\n", p, q, f4);
        }
    }

    // (5) (p ∨ q) ∧ (p ∨ r)
    printf("\n(5) (p ∨ q) ∧ (p ∨ r)\n");
    printf("p q r | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int f5 = (p || q) && (p || r);
                printf("%d %d %d |  %d\n", p, q, r, f5);
            }
        }
    }

    // (6) p ∨ (q ∧ r)
    printf("\n(6) p ∨ (q ∧ r)\n");
    printf("p q r | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int f6 = p || (q && r);
                printf("%d %d %d |  %d\n", p, q, r, f6);
            }
        }
    }

    // (7) (p ∧ ~q) ∧ r
    printf("\n(7) (p ∧ ~q) ∧ r\n");
    printf("p q r | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int f7 = (p && !q) && r;
                printf("%d %d %d |  %d\n", p, q, r, f7);
            }
        }
    }

    // (8) ~q ∧ (p ∧ r)
    printf("\n(8) ~q ∧ (p ∧ r)\n");
    printf("p q r | 결과\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int f8 = (!q) && (p && r);
                printf("%d %d %d |  %d\n", p, q, r, f8);
            }
        }
    }

    return 0;
}