#include <iostream>

int main()
{
    int a[10] = { 3000, 1000, 500, 200, 100, 50, 25, 10, 5, 1 }, sum, flag = 0;
    int b[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    std::cout << "Enter the amount of money: " << std::endl;
    std::cin >> sum;

    if (sum < 0)
    {
        std::cout << "Money can`t be less than 0";
        return 0;
    }
        
    std::cout << std::endl << "Minimum number of banknotes: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        while (sum >= a[i])
        {
            if (flag > 40)
            {
                std::cout << "Enter less money";
                return 0;
            }
            b[i]++;
            sum -= a[i];
            flag++;
        }
        std::cout << a[i] << ": " << b[i] << std::endl;
    }
}