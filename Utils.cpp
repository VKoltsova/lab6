#include "Utils.h"

int Utils::inputInteger(int min, int max) {
    while (true)
    {
        std::cout << "����������, ������� ������������� ������ ��� ������ " << min << " ��� ������ ��� ����� " << max << ": ";
        int a;
        std::cin >> a;

        if (std::cin.fail() || a < min || a > max)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "�����, �������� ����. ���������� ���.\n";
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
        std::cout << "����������, ������� ������� ������ ��� ������ " << min << " ��� ������ ��� ����� " << max << ": ";
        double a;
        std::cin >> a;

        if (std::cin.fail() || a < min || a > max)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "�����, �������� ����. ���������� ���.\n";
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
        std::cout << "����������, ������� ������ ��� �������: ";
        string a;
        std::cin >> a;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "�����, �������� ����. ���������� ���.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');

            return a;
        }
    }
}