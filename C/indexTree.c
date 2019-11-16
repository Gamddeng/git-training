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
    printf("���ڸ� 7�� �Է��Ͻÿ�.\n");
    for (int i = 1; i <= 7; i++){
        int value = 0;
        printf("%d��° �� : ", i);
        scanf("%d", &value);
        update(i, value);
    }
    printf("1���� 7������ ���� �� : %d\n", getSelection(1, 7));
    printf("�ε��� 6�� ���Ҹ� +3��ŭ ����\n");
    update(6,3);
    printf("4���� 7������ ���� �� : %d\n", getSelection(4, 7));
    system("pause");
}