#include <iostream>
#include <iomanip>



int main()
{

    void twoInt();
    {
        int first, second;
        int fDigit;
        int sDigit;

        std::cout << "\n\nEnter your positive integer : ";
        std::cin >> first;
        std::cout << "\nEnter your positive integer : ";
        std::cin >> second;

        std::cout << "\n\nNumber 1: " << std::setw(5) << first;
        std::cout << "\nNumber 2: " << std::setw(5) << second;
        while ((first) && (second))
        {
            fDigit = first % 10;
            first = first / 10;
            sDigit = second % 10;
            second = second / 10;

            if (fDigit == sDigit)
            {
                printf("\n %d - % d Correct\n", fDigit, sDigit);
            }
            else
            {
                printf("\n %d - % d  Incorrect\n", fDigit, sDigit);
            }

        }
        fflush(stdin);

        std::cin.get();

    }

}
