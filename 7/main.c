#include <stdio.h>
#include <math.h>
// Вариант 19
enum System { // Объявление перечислимого типа данных для хранения
    // видов встраиваемых операционных систем
    Symbian,
    Embedded_Linux,
    Windows_CE,
    Electronic,
    VxWorks,
    QNX
};

struct Square { //объявление структуры, описывающей координаты квадрата
    int a[2], b[2], c[2], d[2];
};

struct Element { //объявление структуры, описывающей различные состояния (битовое поле)
    unsigned Ready: 1;
    unsigned Low_toner: 1;
    unsigned Drum_damaged: 1;
    unsigned No_paper: 1;
};

union Lazer {   //объявление объединения, которое содержит интовую переменную и структуру Element
    int status;
    struct Element element;
};

float Perimeter(struct Square *S) { //функция для расчёта периметра квадрата
    float AB;                       // так как у квадрата стороны равны, то можно расссчитать только одну сторону
    AB = sqrt(pow(S->b[0] - S->a[0], 2) + pow(S->b[1] - S->a[1], 2)); //расчёт стороны квадата
    float per;                      // инициализация переменной для хранения периметра квадрата
    per = AB * 4;                   // расчет периметра квадрата
    return per;                     // возвращаем значение периметра квадрата
}

int main() {
    struct Square S;                // инициализыция переменной, которая описывает структуру Square
    // вывод на консоль расположение (индекс в перичислимом типе) Symbian
    printf("Задание 1\nSymbian's number is %d\n", Symbian);
    printf("\nЗадание 2\nВведите 4 пары координат:\n");
    for (int i = 0; i < 2; i++) { //ввод первой пары координат с клавиатуры
        scanf("%d", &S.a[i]);
    }
    for (int i = 0; i < 2; i++) { //ввод второй пары координат с клавиатуры
        scanf("%d", &S.b[i]);
    }
    for (int i = 0; i < 2; i++) { //ввод третьей пары координат с клавиатуры
        scanf("%d", &S.c[i]);
    }
    for (int i = 0; i < 2; i++) { //ввод четвертой пары координат с клавиатуры
        scanf("%d", &S.d[i]);
    }
    // вывод периметра квадрата на консоль
    printf("Perimeter = %f \n", Perimeter(&S));


    struct Element element;     // инициализация переменной, описывающей структуру Element
    union Lazer lazer;          // инициализация переменной, описывающей объединение Lazer
    printf("\nЗадание 3\nВведите число в 16СС:\n");
    scanf("%x", &lazer.status); // ввод числа с клавиатуры в 16СС
    // вывод состояний элементов, после считывание переменной, которая хранится в объединение
    // со структурой, которая хранит эти состояния
    printf("%d %d %d %d \n", lazer.element.Ready, lazer.element.Low_toner,
           lazer.element.Drum_damaged, lazer.element.No_paper);
    return 0;
}