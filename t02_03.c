// 12S25027 - Jessica Mariani Situmorang

#include <stdio.h>

struct Operasi {
    char op;
    int x;
    int hasil;
    int count;
};

int main(int _argv, char **_argc)
{
    struct Operasi o;

    o.count = 0;

    scanf(" %c", &o.op);

    if (o.op == '+') {
        o.hasil = 0;
    }
    else if (o.op == '-') {
        o.hasil = 0;
    }
    else if (o.op == '*') {
        o.hasil = 1;
    }

    printf("%c\n", o.op);

    while (o.count < 4) {
        scanf("%d", &o.x);

        if (o.x == -1) {
            printf("-1\n");
            printf("0\n");
            break;
        }

        printf("%d\n", o.x);

        if (o.op == '+') {
            o.hasil = o.hasil + o.x;
        }
        else if (o.op == '-') {
            o.hasil = o.hasil - o.x;
        }
        else if (o.op == '*') {
            o.hasil = o.hasil * o.x;
        }

        printf("%d\n", o.hasil);

        o.count++;
    }

    return 0;
}