/**
 * @file main.cpp
 * @brief Главный файл программы, демонстрирующий базовый вывод текста.
 * @author Имя_Любимое_моё
 * @date 2025-04-25
 */

#include <iostream>

 /**
  * @brief Вычисляет квадрат числа.
  * @param x Входное число.
  * @return Квадрат числа x.
  */
double square(double x) {
    return x * x;
}

/**
 * @brief Вычисляет куб числа.
 * @param x Входное число.
 * @return Куб числа x.
 */
double cube(double x) {
    return x * x * x;
}

/**
 * @brief Точка входа в программу.
 * @return Код завершения программы (0 — успех).
 */
int main()
{
    std::cout << "Square of 5: " << square(5) << std::endl;
    std::cout << "Cube of 3: " << cube(3) << std::endl;
    return 0;
}