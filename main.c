#include <stdlib.h>
#include <stdio.h>

#define WIDTH 100
#define HEIGHT 20

#define POINT(x, y) arr[x + (y * WIDTH)]

char arr[WIDTH * HEIGHT];

int main() {
    int j = 0;
    printf("%d\n", j++);

    for (int i = 0; i < HEIGHT; i++) {
        for (int k = 0; k < WIDTH; k++) {
            if (i == k) {
                POINT(k, i) = '@';
            }
            printf("%c", POINT(k, i) == 0 ? '.' : POINT(k, i));
        }
        printf("\n");
    }

    return 0;
}
