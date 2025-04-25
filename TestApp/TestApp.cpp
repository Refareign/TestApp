/**
 * @file main.cpp
 * @brief Главный файл программы, демонстрирующий базовый вывод текста.
 * @author Ваше_Имя
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
 * @brief Точка входа в программу.
 * @return Код завершения программы (0 — успех).
 */
int main()
{
    std::cout << "Square of 5: " << square(5) << std::endl;
    return 0;
}