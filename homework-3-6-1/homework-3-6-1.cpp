
#include <iostream>
#define MODE 0
#ifndef MODE

#error сообщение о необходимости определить MODE

#endif // !MODE

#if MODE == 1

int add(int num1, int num2)
{
    return num1 + num2;
}
#endif // MODE == 1



int main()
{
    setlocale(LC_ALL, "Russian");

#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    int num1 = 0, num2 = 0;
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения : " << add(num1, num2) << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif // MODE

}
