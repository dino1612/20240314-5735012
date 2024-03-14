#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    int sum = 0;
    int i, j;

    // ?? ?? ??
    start = clock();

    // 0?? 100?? ?? ???
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

    // ?? ?? ??
    end = clock();

    // ?? ? ??
    printf("0?? 100?? ??? ?: %d\n", sum);

    // ?? ?? ?? ? ??
    printf("?? ??: %.2f?\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
