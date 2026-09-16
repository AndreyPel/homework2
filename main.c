#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define A 2.54
#define I 2.32166

#define M 1.852
#define C 1.609
#define R 1.475
#define SR 7.468
#define G 7412.6



void homework() {
    // Объявление и инициализация констант
    const float PERCENT_BASE = 50.0;  // Базовый процент изменения (50/n %)
    const float HUNDRED = 100.0;      // Для перевода процентов в доли

    // Шаг 1: Задание конкретных значений переменных
    int   x = 10;      // Фактическое количество дней строительства
    int   n = 10;   // Нормативный (плановый) срок, дней
    float S = 200000.0; // Базовая зарплата бригады при сдаче в срок (руб.)
    int d = 15;

    float W;  // Итоговая сумма к выплате (руб.)

    // Каждый день отклонения меняет зарплату на 50/n %.
    // Просрочка (d > 0) уменьшает, досрочная сдача (d < 0) увеличивает.
    // Формула из блок-схемы: W = S * (1 - d * 50 / (100 * n))
    W = S * (1.0 - d * PERCENT_BASE / (HUNDRED * n));
    printf("Введите фактическое количество дней строительства:");

    printf("Введите фактическое количество дней строительства:");

    printf("РАСЧЁТ ЗАРПЛАТЫ БРИГАДЫ СТРОИТЕЛЕЙ\n");
    printf("========================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Нормативный срок строительства: %d дн.\n", n);
    printf("- Фактический срок строительства: %d дн.\n", x);
    printf("- Базовая зарплата (при сдаче в срок): %.2f руб.\n", S);
    printf("- Изменение за каждый день: %.2f/%d = %.2f %% \n", PERCENT_BASE, n, PERCENT_BASE / n);
    printf("========================================\n\n");

    printf("РАСЧЁТ:\n");
    printf("- Отклонение по срокам d = x - n = %d - %d = %d дн.\n", x, n, d);


    printf("- Просрочка на %d дн.: зарплата уменьшается на %.2f %%.\n", d, d * PERCENT_BASE / n);


    printf("- Формула: W = S * (1 - d * 50 / (100 * n))\n");
    printf("========================================\n");
    printf("ИТОГОВАЯ ЗАРПЛАТА БРИГАДЫ: %.2f руб.\n", W);

}

void task1() {
    int num1;
    int num2;
    puts("Введите первое число: ");
    scanf("%d", &num1);
    printf("\nВведено число %d\n", num1);
    puts("\nВведите второе число: ");
    scanf("%d", &num2);
    printf("\nВведено число %d\n", num2);
    printf("\nСумма этих двух чисел: %d\n", num1 + num2);
    printf("\nРазность этих двух чисел: %d\n", num1 - num2);
    printf("\nПроизведени этих двух чисел: %d\n", num1 * num2);
    printf("\nДеление второго числа на первое: %d\n", num2 / num1);
    printf("\nОстаток от деления второго числа на первое: %d\n", num2 % num1);

}

void task2_1() {
    int dym;
    float result;

    puts("Введите число, чтобы перевести из дюймов в см: ");
    scanf("%d", &dym);

    result = A * dym;

    printf("\nАнглийский:\n %d дюймов – это %.2f см \n", dym, result);

    result = I * dym;

    printf("\nИспанский:\n %d дюймов – это %.2f см \n", dym, result);
}

void task2_2() {
    int m;
    float result;

    puts("Введите число, чтобы перевести из морских миль в км: ");
    scanf("%d", &m);

    result = M * m;

    printf("\nМорская миля:\n %d миль – это %.2f км \n", m, result);

    result = C * m;

    printf("\nСухопутная миля:\n %d миль – это %.2f км \n", m, result);

    result = R * m;

    printf("\nРимская миля:\n %d миль – это %.2f км \n", m, result);

    result = SR * m;

    printf("\nСтарорусская миля:\n %d миль – это %.2f км \n", m, result);

    result = G * m;

    printf("\nГеографическая миля:\n %d миль – это %.2f км \n", m, result);
}

void task3() {
    int a, b;

    printf("Введите  числа a:");
    scanf("%d", &a);
    printf("\nВведите числа b:");
    scanf("%d", &b);

    printf("_________________________\n");

    printf("|  %s |  %s |  %s |\n", "a * b", "a + b", "a - b");

    printf("_________________________\n");

    printf("| %d*%d | %d/%d | %d-%d |\n",  a, b, a, b, a, b);

    double prod = a * b;
    double diff = a - b;
    printf("_________________________\n");
    printf("| %-4d | %-4d | %-4d |\n", prod, (a + b), diff);
    printf("__________________________\n");

    return 0;
}

void main() {
    

    setlocale(LC_ALL, "RUS");
    task3();
    
    return 0;
}