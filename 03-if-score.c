// if文で、60点以上なら合格、それ以外は不合格
#include <stdio.h>

int main(void)
{
    int score = 75;

    if (score >= 60) {
        printf("合格\n");
    } else {
        printf("不合格\n");
    }

    return 0;
}
