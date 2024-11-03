/* Тема: Структуры и перечисления.Задача 3, Вывод структуры
Создайте структуру для хранения адреса. Структура должна содержать название города, улицы, номер дома, номер квартиры и индекс.
Создайте функцию для вывода структуры на консоль.
Протестируйте созданную функцию. Создайте в коде экземпляры структуры, передайте их в функцию и
выведите на консоль получившиеся экземпляры структуры.*/

#include <iostream>
#include <string>

struct typeAddress {

    std::string City;
    std::string Street;
    int HouseNum = 0;
    int AppartmentNum = 0;
    int ZipCode = 0;
};

void funPrintAddress(typeAddress& Address)
{
    std::cout << "Город: " << Address.City << std::endl;
    std::cout << "Улица: " << Address.Street << std::endl;
    std::cout << "Номер дома: " << Address.HouseNum << std::endl;
    std::cout << "Номер квартиры: " << Address.AppartmentNum << std::endl;
    std::cout << "Индекс" << Address.ZipCode << std::endl;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    typeAddress newAddress1 = { "Урюпинск", "Ленина", 5, 13, 456113 };
    typeAddress newAddress2 = { "Москва", "Цветочная", 16, 45, 135785 };

    funPrintAddress(newAddress1);
    std::cout << std::endl;
    funPrintAddress(newAddress2);

    return 0;
}