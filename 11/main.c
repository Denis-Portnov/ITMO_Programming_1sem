#include <stdio.h>
#include "describes.h"  // подключение заголовочного файла

// Вариант 19
int main() {
    struct Triangle T; // инициализация переменной, описывающей структуру Triangle
    for (int i = 0; i < 2; i++) { //ввод первой пары координат с клавиатуры
        scanf("%d", &T.a[i]);
    }
    for (int i = 0; i < 2; i++) { //ввод второй пары координат с клавиатуры
        scanf("%d", &T.b[i]);
    }
    for (int i = 0; i < 2; i++) { //ввод третьей пары координат с клавиатуры
        scanf("%d", &T.c[i]);
    }
    double p = Perimetr(&T);      // расчет периметра равнобедренного треугольника
    double s = Square(&T);        // расчет площади равнобедренного треугольника
    printf("%lf %lf", p, s);      // вывод периметра и площади
    return 0;
}
