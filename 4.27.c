#include <stdio.h>
int main() {
    int side1, side2, side3;
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {
            for (side3 = side2; side3 <= 500; side3++) {
                if (side1 * side1 + side2 * side2 == side3 * side3) {
                    printf("三邊長: %d, %d, %d\n", side1, side2, side3);
                }
            }
        }
    }

    return 0;
}
