#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

int calculate(int x1, int y1, int r1, int x2, int y2, int r2) {
    SetConsoleOutputCP(1251);
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if (distance == 0 && r1 == r2) {
        // Кола ідентичні
        return -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // Кола не перетинаються
        return 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються зовні або всередині
        return 1;
    } else {
        // Кола перетинаються в двох точках
        return 2;
    }
}

int main() {
    SetConsoleOutputCP(1251);
    int x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центру першого кола (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть радіус першого кола (r1): ");
    scanf("%d", &r1);
    printf("Введіть координати центру другого кола (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Введіть радіус другого кола (r2): ");
    scanf("%d", &r2);

    int Points = calculate(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину: %d\n", Points);

    return 0;
}
