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
    int user_input = 0;
    while(true)
    {
        std::cout << "Укажите номер месяца: ";
        std::cin >> user_input;
        if (user_input > 0 && user_input <= 12)
        {
            switch (static_cast <Months>(user_input))
            {
                case Months::Jan:
                {
                    std::cout << "Январь" << std::endl;
                    break;
                }
                case Months::Feb:
                {
                    std::cout << "Февраль" << std::endl;
                    break;
                }
                case Months::Mar:
                {
                    std::cout << "Март" << std::endl;
                    break;
                }
                case Months::Apr:
                {
                    std::cout << "Апрель" << std::endl;
                    break;
                }
                case Months::May:
                {
                    std::cout << "Май" << std::endl;
                    break;
                }
                case Months::Jun:
                {
                    std::cout << "Июнь" << std::endl;
                    break;
                }
                case Months::Jul:
                {
                    std::cout << "Июль" << std::endl;
                    break;
                }
                case Months::Aug:
                {
                    std::cout << "Август" << std::endl;
                    break;
                }
                case Months::Sep:
                {
                    std::cout << "Сентябрь" << std::endl;
                    break;
                }
                case Months::Oct:
                {
                    std::cout << "Октябрь" << std::endl;
                    break;
                }
                case Months::Nov:
                {
                    std::cout << "Ноябрь" << std::endl;
                    break;
                }
                case Months::Dec:
                {
                    std::cout << "Декабрь" << std::endl;
                    break;
                }
            }
        }
        else
        {
            if (user_input == 0)
            {
                std::cout << "До свидания" << std::endl;
                return 0;
            }
            else
            {
                std::cout << "Вы указали несуществующий номер месяца: " << user_input << std::endl;
                return 1;
            }
        }
    }
}
