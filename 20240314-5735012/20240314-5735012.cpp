#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    int sum = 0;
    int i, j;

    // 시작 시간 측정
    start = clock();

    // 0부터 100까지 소수 구하기
    for (i = 2; i <= 100; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > i / 2) {
            sum += i;
        }
    }

    // 종료 시간 측정
    end = clock();

    // 소수 합 출력
    printf("0부터 100까지 소수의 합: %d\n", sum);

    // 수행 시간 계산 및 출력
    printf("수행 시간: %.2f초\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
