// 12S25040 - Cyndi Cyahti Manullang

#include <stdio.h>

struct Operasi {
    char operator;
    int num;
    int hasil;
};

int main(int _argv, char **_argc)
{
    struct Operasi op;

    scanf(" %c", &op.operator);

    if (op.operator == '*') {
        op.hasil = 1;
    } else {
        op.hasil = 0;
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &op.num);

        if (op.num == -1) {
            printf("0\n");
            break;
        }

        if (op.operator == '+') {
            op.hasil = op.hasil + op.num;
        } else if (op.operator == '-') {
            op.hasil = op.hasil - op.num;
        } else if (op.operator == '*') {
            op.hasil = op.hasil * op.num;
        }

        printf("%d\n", op.hasil);
    }

    return 0;
}