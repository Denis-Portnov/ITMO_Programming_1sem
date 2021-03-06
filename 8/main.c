#include <stdio.h>
#include <string.h>

// Вариант 19
int main() {
    // Задание 2 - Осуществить конкатенация (сложение) первой строки и n начальных символов второй
    //строки.
    printf("Задание 2\n");
    char s1[100], s2[100]; // инициализируем массивы для хранения строк
    printf("Введите первую строку, затем вторую:\n");
    scanf("%s %s", s1, s2);// ввод строк
    unsigned n;            // инициализация переменной n, определяющей кол-во символов для конкатенации
    printf("Введите число n - число символов для конкатенации:\n");
    scanf("%d", &n);
    strncat(s1, s2, n);    // конкатенация первой строки и n начальных символов второй строки
    printf("Итоговая строка, после конкатенации:\n%s\n", s1);


    // Задание 5 - Осуществить копирование одной строки в другую строку.
    printf("\nЗадание 5\n");
    char s3[100], s4[100];  // инициализируем массивы для хранения строк
    printf("Введите первую строку, затем вторую:\n");
    scanf("%s %s", s3, s4); // считываем строки
    printf("Первая строка до копирования второй строки:\n%s\n", s3);
    strcpy(s3, s4);         // копируем одну строку в другую
    printf("Первая строка после копирования второй строки:\n%s\n", s3);


    // Задание 6 - Осуществить копирование первых n символов одной строки в другую строку.
    printf("\nЗадание 6\n");
    char s5[100], s6[100];  // инициализируем массивы для хранения строк
    printf("Введите первую строку, затем вторую:\n");
    scanf("%s %s", s5, s6); // считываем строки
    printf("Введите число n - число символов для копирования:\n");
    scanf("%d", &n);        // вводим число n - кол-во символов для копирования
    printf("Первая строка до копирования n символов второй строки:\n%s\n", s5);
    strncpy(s5, s6, n);     // копирование n символов одной строки в другую
    printf("Первая строка после копирования n символов второй строки:\n%s\n", s5);


    // Задание 9 - Осуществить поиск в строке последнего вхождения указанного символа.
    printf("Задание 9\n");
    char s7[100];
    char item, *ps7;
    printf("Введите сначала строку, затем символ, адрес последнего вхождения которого необходимо найти:\n");
    scanf("%s %s", s7, &item); // ввод строки и элемента, последнее вхождение которого необходимо найти
    ps7 = strrchr(s7, item); // поиск символа (если таких символов в строке несколько, то ps7 будет
    // хранить адрес последнего вхождения этого элемента)

    // вывод индекса последнего вхождения символа в строке
    if (ps7 == NULL)
        printf("Символ в строке не найден\n");
    else
        printf("Искомый символ в строке на позиции %d\n", ps7 - s7);


    // Задание 12 - Определить длину отрезка одной строки, не содержащего символы второй строки.
    printf("\nЗадание 12\n");
    char s8[100], s9[100]; // инициализируем массивы для хранения строк
    scanf("%s %s", s8, s9);// считывание строк
    printf("%d", strcspn(s8, s9)); // вывод длины отрезка одной строки, не содержащего символы второй строки
    return 0;
}
