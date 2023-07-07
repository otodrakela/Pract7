#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

int calculate(int x1, int y1, int r1, int x2, int y2, int r2) {
    SetConsoleOutputCP(1251);
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if (distance == 0 && r1 == r2) {
        // ���� ��������
        return -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // ���� �� �������������
        return 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // ���� ���������� ���� ��� ��������
        return 1;
    } else {
        // ���� ������������� � ���� ������
        return 2;
    }
}

int main() {
    SetConsoleOutputCP(1251);
    int x1, y1, r1, x2, y2, r2;
    printf("������ ���������� ������ ������� ���� (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("������ ����� ������� ���� (r1): ");
    scanf("%d", &r1);
    printf("������ ���������� ������ ������� ���� (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("������ ����� ������� ���� (r2): ");
    scanf("%d", &r2);

    int Points = calculate(x1, y1, r1, x2, y2, r2);
    printf("ʳ������ ����� ��������: %d\n", Points);

    return 0;
}
