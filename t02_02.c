// 12S25027 - Jessica Mariani Situmorang

#include <stdio.h>

struct Menu {
    int level;
};

int main(int _argv, char **_argc)
{
    struct Menu m;

    scanf("%d", &m.level);

    if (m.level == 1) {
        printf("staple food\n");
        printf("you need side dishes\n");
    } 
    else if (m.level == 2) {
        printf("side dishes\n");
        printf("staple food\n");
        printf("you need vegetables\n");
    } 
    else if (m.level == 3) {
        printf("vegetables\n");
        printf("side dishes\n");
        printf("staple food\n");
        printf("good\n");
    } 
    else if (m.level == 4) {
        printf("fruits\n");
        printf("vegetables\n");
        printf("side dishes\n");
        printf("staple food\n");
        printf("very good\n");
    } 
    else if (m.level == 5) {
        printf("milk\n");
        printf("fruits\n");
        printf("vegetables\n");
        printf("side dishes\n");
        printf("staple food\n");
        printf("perfect\n");
    }

    return 0;
}