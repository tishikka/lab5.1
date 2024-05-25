#ifndef FUNCTION
#define FUNCTION

#include <vector>

/**
 * @brief преобразовываем число типа int в число в векторном представлении
 * 
 * @param a число типа int
 * 
 * @return возвращает число в виде вектора
*/
std::vector <int> vctr(int a);

/**
 * @brief складывает два целочисленных числа-вектора
 * 
 * @param первое число-вектор
 * @param второе число-вектор
 * 
 * @return сумма двух исходных чисел-векторов
*/
std::vector <int> sm(std::vector <int> a1, std::vector <int> a2);

#endif