#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double length;

    // Введення координат вектора
    printf("Введіть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Введіть координати кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Обчислення довжини вектора
    length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Виведення результату
    printf("Довжина вектора: %.6f\n", length);

    return 0;
}
