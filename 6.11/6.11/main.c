#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, tmp;
    int a[5] = { 26, 5, 81, 7, 63 };
    int swapped;

    for (i = 0; i < 4; i++) {
        swapped = 0; // �C���~�h�j��}�l�ɡA���m swapped �лx
        for (j = 0; j < 4 - i; j++) { // �C���j�������ƴ�� 1
            if (a[j] > a[j + 1]) {
                // �洫�۾F������
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swapped = 1; // �аO�o�ͤF�洫
            }
        }

        // ��X�C���j��᪺�}�C���A
        printf("Loop %d: ", i);
        for (j = 0; j < 5; j++) {
            printf("%4d", a[j]);
        }
        printf("\n");

        // �p�G�S���o�ͥ洫�A�����פ�j��
        if (swapped == 0) {
            break;
        }
    }
    system("pause");
    return 0;
}