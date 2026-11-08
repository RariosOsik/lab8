#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
    task0();
    task1();
    task1a();
    task2();
}
int task0() {
    setlocale(LC_ALL, ".UTF8");
    int n;
    char c1, c2;

    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите первый символ (для первой половины): ");
    scanf(" %c", &c1);

    printf("Введите второй символ (для второй половины): ");
    scanf(" %c", &c2);

    putchar('+');

    for (int i = 0; i < n; i++) {

        if (i < (n + 1) / 2) {
            putchar(c1);
        }
        else {
            putchar(c2);
        }

        putchar('!');
    }

    putchar('+');

    printf("\n"); 
    return 0;
}
int task1() {
    int m, n;
    int sum = 0;

    printf("Введите начало диапазона (m): ");
    scanf("%d", &m);
    printf("Введите конец диапазона (n): ");
    scanf("%d", &n);

    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++) {
        sum = sum + i;
    }
    printf("Сумма чисел от %d до %d равна: %d\n", m, n, sum);

    return 0;
}
int task1a() {
    int n;
    printf("Введите степень n: ");
    scanf("%d", &n);
    long long s = 1;
    printf("Степени:\n");
    for (int i = 1; i <= n; i++) {
        s = s * 2;
        printf("2^%d = %lld\n", i, s);
    }
    printf("\nРезультат: %.2f К\n", (double)s / 1024.0);
    return 0;
}
int task2() {
    double a = 1.0;
    double b = 3.0;

    double h; 
    double x, y;

    printf("Функция: y = x^3 - 4x^2 + 2\n");
    printf("Интервал: [1; 3]\n");

    printf("Введите шаг: ");
    scanf("%lf", &h);
    if (h == 0) {
        printf("Шаг не может быть равен нулю!\n");
        return 0;
    }
    printf("\nТаблица значений:\n");
    printf("x\t|\ty\n");
    printf("-----------------\n");

    for (x = a; x <= b; x = x + h) {

        y = (x * x * x) - (4 * x * x) + 2;
        printf("%.2f\t|\t%.2f\n", x, y);
    }

    return 0;
}