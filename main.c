#include <stdio.h>

int main() {
    int lowest = 21;
    while (1) {
        int flag = 0;
        for (int i = 2; i <= 20; i++) {
            if (lowest % i != 0) {
                lowest++;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            break;
        }
    }
    printf("%i", lowest);
    return 0;
}