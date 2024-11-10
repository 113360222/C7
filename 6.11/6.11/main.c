#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, tmp;
    int a[5] = { 26, 5, 81, 7, 63 };
    int swapped;

    for (i = 0; i < 4; i++) {
        swapped = 0; // 每次外層迴圈開始時，重置 swapped 標誌
        for (j = 0; j < 4 - i; j++) { // 每次迴圈比較次數減少 1
            if (a[j] > a[j + 1]) {
                // 交換相鄰的元素
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swapped = 1; // 標記發生了交換
            }
        }

        // 輸出每次迴圈後的陣列狀態
        printf("Loop %d: ", i);
        for (j = 0; j < 5; j++) {
            printf("%4d", a[j]);
        }
        printf("\n");

        // 如果沒有發生交換，提早終止迴圈
        if (swapped == 0) {
            break;
        }
    }
    system("pause");
    return 0;
}