/* Тема: Структуры и перечисления. Задача 1. Месяцы
Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.
Если пользователь ввёл некорректный номер месяца, сообщите ему об этом.
Спрашивайте пользователя до тех пор, пока он не введёт 0.
Для решения задачи воспользуйтесь перечислением */

#include <iostream>
# include <string>

enum typeMonths
{
    январь = 1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int number = 0;

    do
    {
        std::cout << "Введите номер месяца:";
        std::cin >> number;

        if (number < 0 or number>12)
        {
            std::cout << "Номер месяца введен некорректно." << std::endl;
        }
        else if (number == 0)
        {
            std::cout << "До свидания!" << std::endl;
        }
        else
        {
            switch (number)
            {
            case typeMonths::январь:
                std::cout << "Январь" << std::endl;
                break;
            case typeMonths::февраль:
                std::cout << "Февраль" << std::endl;
                break;
            case typeMonths::март:
                std::cout << "Март" << std::endl;
                break;
            case typeMonths::апрель:
                std::cout << "Апрель" << std::endl;
                break;
            case typeMonths::май:
                std::cout << "Май" << std::endl;
                break;
            case typeMonths::июнь:
                std::cout << "Июнь" << std::endl;
                break;
            case typeMonths::июль:
                std::cout << "Июль" << std::endl;
                break;
            case typeMonths::август:
                std::cout << "Август" << std::endl;
                break;
            case typeMonths::сентябрь:
                std::cout << "Сентябрь" << std::endl;
                break;
            case typeMonths::октябрь:
                std::cout << "Октябрь" << std::endl;
                break;
            case typeMonths::ноябрь:
                std::cout << "Ноябрь" << std::endl;
                break;
            case typeMonths::декабрь:
                std::cout << "Декабрь" << std::endl;
                break;
            default:
                break;
            }
        }
    } while (number != 0);

    return 0;
}