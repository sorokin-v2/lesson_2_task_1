#include <iostream>

enum class Months
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int user_input;
    do
    {
        std::cout << "Укажите номер месяца: ";
        std::cin >> user_input;
        
        switch (user_input)
        {
            case static_cast<int>(Months::Jan):
            {
                std::cout << "Январь" << std::endl;
                break;
            }
            case static_cast<int>(Months::Feb):
            {
                std::cout << "Февраль" << std::endl;
                break;
            }
            case static_cast<int>(Months::Mar):
            {
                std::cout << "Март" << std::endl;
                break;
            }
            case static_cast<int>(Months::Apr):
            {
                std::cout << "Апрель" << std::endl;
                break;
            }
            case static_cast<int>(Months::May):
            {
                std::cout << "Май" << std::endl;
                break;
            }
            case static_cast<int>(Months::Jun):
            {
                std::cout << "Июнь" << std::endl;
                break;
            }
            case static_cast<int>(Months::Jul):
            {
                std::cout << "Июль" << std::endl;
                break;
            }
            case static_cast<int>(Months::Aug):
            {
                std::cout << "Август" << std::endl;
                break;
            }
            case static_cast<int>(Months::Sep):
            {
                std::cout << "Сентябрь" << std::endl;
                break;
            }
            case static_cast<int>(Months::Oct):
            {
                std::cout << "Октябрь" << std::endl;
                break;
            }
            case static_cast<int>(Months::Nov):
            {
                std::cout << "Ноябрь" << std::endl;
                break;
            }
            case static_cast<int>(Months::Dec):
            {
                std::cout << "Декабрь" << std::endl;
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                std::cout << "Вы указали несуществующий номер месяца: " << user_input << std::endl;
                return 1;
            }
        }
    } while (user_input != 0);
    std::cout << "До свидания" << std::endl;
    return 0;
}

