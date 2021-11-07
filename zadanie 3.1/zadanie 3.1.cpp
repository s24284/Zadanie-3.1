// zadanie 3.1.cpp : 
//

#include <iostream>
#include <iomanip>

int main()
{
    float x;
    float y;
    float suma, iloraz, iloczyn, roznica;


    std::cout << "Podaj liczbe x:\n";
    std::cin >> x;

    std::cout << "Podaj liczbe y:\n";
    std::cin >> y;



    suma = x + y;

    std::cout << "Suma liczby x = " << std::fixed << std::setprecision(2) << x << " i y = " << y << " wynosi: " << suma << "\n";

    roznica = x - y;

    std::cout << "Roznica liczby x = " << x << " i y = " << y << " wynosi: " << roznica << "\n";

    iloczyn = x * y;

    std::cout << "Iloczyn liczby x = " << x << " i y = " << y << " wynosi: " << iloczyn << "\n";

    if (y == 0) {

        std::cout << "Nie moge dzielic przez zero.";

    }

    iloraz = x / y;

    std::cout << "Iloraz liczby x = " << x << " i y = " << y << " wynosi: " << iloraz << "\n";


    return 0;

}