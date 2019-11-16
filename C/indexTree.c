#include <stdio.h>
#define NUMBER 7

int tree[NUMBER];

int sum(int i) {
    int res = 0;
    while (i > 0) {
        res += tree[i];
        i -= (i & -i);
    }
    return res;
}

void update(int i, int dif) {
    while (i <= NUMBER) {
        tree[i] += dif;
        i += (i & -i);
    }
}
int getSelection(int start, int end) {
    return sum(end) - sum(start - 1);
}

int main(void) {
    printf("숫자를 7개 입력하시오.\n");
    for (int i = 1; i <= 7; i++){
        int value = 0;
        printf("%d번째 값 : ", i);
        scanf("%d", &value);
        update(i, value);
    }
    printf("1부터 7까지의 구간 합 : %d\n", getSelection(1, 7));
    printf("인덱스 6의 원소를 +3만큼 수정\n");
    update(6,3);
    printf("4부터 7까지의 구간 합 : %d\n", getSelection(4, 7));
    system("pause");
}