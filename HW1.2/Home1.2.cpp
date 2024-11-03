/* Тема: Структуры и перечисления.Задача 2. Счета
Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта (целое число), 
имя владельца (строка) и количество денег на счету (дробное число).
Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.
Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта и выведите обновлённый экземпляр структуры 
на консоль.*/

#include <iostream>
#include <string>

struct typeBill {
    int BillAccounte=0;
    std::string UserName;
    float UserBalance=0;
};

void funUpdateBalance(typeBill& User, float NewBalance)
{
    User.UserBalance = User.UserBalance + NewBalance;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    typeBill NewUser;
    float NewBalance;

    std::cout << "Введите номер счета: ";
    std::cin >> NewUser.BillAccounte;
    std::cout << "Введите имя пользователя: ";
    std::cin >> NewUser.UserName;
    std::cout << "Введите баланс: ";
    std::cin >> NewUser.UserBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> NewBalance;

    funUpdateBalance(NewUser, NewBalance);
    std::cout << "Ваш счет: " << NewUser.UserName << ", " << NewUser.BillAccounte << ", " << NewUser.UserBalance << std::endl;
    return 0;
}