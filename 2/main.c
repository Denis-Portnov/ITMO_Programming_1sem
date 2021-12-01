#include <stdio.h>
#include <math.h>                                 // подключили библиотеку для возведения в степень с помощью pow()
//Вариант 18
int main() {
    double z1, z2;                                // объявление переменных z1 и z2 типа double
    float a;                                      // объявление переменной a типа float
    printf("Put a: ");                            // выыод текста на консоль
    scanf("%f", &a);                              // считывание с консоли переменной a
    z1 = (((a + 2) / (pow(2 * a, 0.5))) -         // вычисление переменной z1
            (a / (pow(2 * a, 0.5) + 2)) +         // вычисление переменной z1
            (2 / (a - pow(2 * a, 0.5)))) *        // вычисление переменной z1
         ((pow(a, 0.5) - pow(2, 0.5)) / (a + 2)); // вычисление переменной z1
    printf("z1 = %f\n", z1);                      // вывод текста и переменной z1 на консоль
    z2 = (1 / (pow(a, 0.5) + pow(2, 0.5)));       // вычисление переменной z2
    printf("z2 = %f\n", z2);                      // вывод текста и переменной z2 на консоль
    return 0;
}