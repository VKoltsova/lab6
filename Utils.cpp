#include "Utils.h"

int Utils::inputInteger(int min, int max) {
    while (true)
    {
        std::cout << "Пожалуйста, введите целочисленное больше или равное " << min << " или меньше или равно " << max << ": ";
        int a;
        std::cin >> a;

        if (std::cin.fail() || a < min || a > max)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ууупс, неверный ввод. Попробуйте еще.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');

            return a;
        }
    }
}

double Utils::inputDouble(double min, double max) {
    while (true)
    {
        std::cout << "Пожалуйста, введите дробное больше или равное " << min << " или меньше или равно " << max << ": ";
        double a;
        std::cin >> a;

        if (std::cin.fail() || a < min || a > max)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ууупс, неверный ввод. Попробуйте еще.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');

            return a;
        }
    }
}

string Utils::inputString() {
    while (true)
    {
        std::cout << "Пожалуйста, введите строку без пробела: ";
        string a;
        std::cin >> a;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ууупс, неверный ввод. Попробуйте еще.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');

            return a;
        }
    }
}