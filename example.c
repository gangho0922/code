// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct k {
//     int a;
//     int b;
// };
// int main() {
//     struct k abc;
//     abc.a = 5;
//     printf("%d\n", abc.a);
//     int ch;
//     char c;
//     c = getchar();
//     printf("%d\n", c);
//     while((ch = getchar()) != EOF)
//         putchar(ch);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
struct student {
    int number;
    char name[10];
    double grade;
    struct dob date;
};
struct dob {
    int number;
    char name[10];
    double grade;
};

int main() {
    struct student s;
    s.number = 20230001;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2f\n", s.grade);
    return 0;
}
//1014_2.c