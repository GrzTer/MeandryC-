#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <numeric>
#include <conio.h>
#include <math.h>

static bool running = true;

    /*******************************
                Zadanie 1
    ********************************/
void PoleKola()
{
    std::cout << "\n==================== Zadanie 1 ====================\n";

    float promien_kola;
    float PI = 3.14159;

    std::cout << "Podaj promien kola: \n";
    std::cin >> promien_kola;

    float pole_kola = PI * pow(promien_kola, 2);

    std::cout.precision(3);
    printf("Pole kola wynosi: %.1f\n", pole_kola);
}


    /*******************************
                Zadanie 2
    ********************************/
void Dzialania()
{
    std::cout << "\n==================== Zadanie 2 ====================\n";

    float x;
    x = 2 / 3;
    std::cout << "a) " << x << "\n";

    float y;
    y = 1.0 / 2 + 4;
    std::cout << "b) " << y << "\n";

    int z;
    z = (1.0 / 2) + (3 / 4);
    std::cout << "c) " << z << "\n";
}

    /*******************************
                Zadanie 3
    ********************************/
void Specyfikacje()

{
    std::cout << "\n==================== Zadanie 3 ====================\n";

    float x = 1.0 / 3.0;
    printf("Liczba ta: %.3f ma trzy miejsca po przecinku.", x);
}

    /*******************************
                Zadanie 4
    ********************************/
void WartośćFunkcji()
{
    std::cout << "\n==================== Zadanie 4 ====================\n";

    int x;
    float y;
    for (x = -4; x <= 6; x += 2)
    {
        y = 0.8 * x * x - 2 * x - 3;
        printf("%2d     \t \t %5.2f \n", x, y);
    }
}

    /*******************************
                Test-zabawa
    ********************************/
void fun_on_map()
{
    std::unordered_map<int, std::string> arr = { {1, "H"}, {2, "e"}, {3, "l"}, {4, "l"}, {5, "o"}, {6, " "} };
    std::string result = std::accumulate(arr.begin(), arr.end(), std::string(),
                                             [](std::string a, const std::pair<const int, std::string>& b) {
                                                 return a + b.second;
                                             });
    std::cout << result << "\n";
    arr[7] = "W";
    arr[8] = "o";
    arr[9] = "r";
    arr[10] = "l";
    arr[11] = "d";
    arr[12] = "!";
    result = std::accumulate(arr.begin(), arr.end(), std::string(),
                                             [](std::string a, const std::pair<const int, std::string>& b) {
                                                 return a + b.second;
                                             });
    std::cout << result << "\n";


}

    /*******************************
                Program 11
    ********************************/
void Program11()
{
    std::cout << "\n==================== Program 11 ====================\n";

    int i = 0;
    while (i < 5)
    {
        printf("Nie bede rozmawiac na lekcji. nr: %d\n", i + 1);
        i++;
    }
}

    /*******************************
                Program 12
    ********************************/
void Program12()
{
    std::cout << "\n==================== Program 12 ====================\n";

    int i = 0, suma = 0;
    std::cout << "Program dodaje kolejne liczby \n\n";
    while (i >= 0)
    {
        suma += i;
        std::cout << "Podaj liczbe: ";
        std::cin >> i;
    }
    std::cout << "Suma podanych liczb wynosi " << suma << " .\n";
}

    /*******************************
                Program 13
    ********************************/
void Program13()
{
    std::cout << "\n==================== Program 13 ====================\n";

    system("cls");
    char z = 't';
    double x;
    do {
        std::cout << "\nPodaj liczbe dodatnia: ";
        std::cin >> x;
        if (x < 0) {
            std::cout << "\n zla liczba  \n";
            continue;
        }
        std::cout << "\nPierwiastek z " << x << " jest rowny " << sqrt(x) << "\n";
        std::cout << "Czy dalej (t/n)  ";
        z = _getche();
    } while (z == 't');
    _getch();
}

    /*******************************
                Program 14
        Podnoszenie do kwadratu
        wprowadzonych liczb.
        Wciśnięcie 'ESC' kończy pracę.
    ********************************/
void Program14()
{
    std::cout << "\n==================== Program 14 ====================\n";

    system("cls");
    char z;
    float x;
    std::cout << "Podnoszenie do kwadratu (Esc konczy prace) \n\n";
    while (true) {
        std::cout << "Podaj liczbe: ";
        std::cin >> x;
        std::cout << "\nKwadrat liczby " << x << " jest rowny: " << x * x << "\n\n";
        z = _getch();
        if (z == 27) break;
    }
}

    /*******************************
                Program 15
        Liczenie liter w tekście
    ********************************/
void Program15()
{
    std::cout << "\n==================== Program 15 ====================\n";

    char tekst[80];
    int i = 0;
    std::cout << "Podaj tekst: ";
    std::cin.getline(tekst, 80);
    while (tekst[i] != '\0') i++;
    std::cout << "Tekst zawiera " << i << " liter.\n";

}
    /*******************************
                Zadanie 4?
        Napisz program, który wydrukuje w jednej
        kolumnie 5 kolejnych liczb naturalnych,
        a w drugiej zaś kwadraty tych liczb.
    ********************************/
void DrukKwadNat()
{
    std::cout << "\n==================== Zadanie 4? ====================\n";

    // int i = 1;
    // std::cout << "Liczba\tKwadrat\n";
    // while (i <= 5)
    // {
    //     std::cout << i << "\t" << i * i << "\n";
    //     i++;
    // }
    int i;
    std::cout << "Podaj liczbe naturalna: ";
    std::cin >> i;
    std::cout << "\nLiczba\tKwadrat\n";
    for (int j = i; j < i + 5; j++)
    {
        std::cout << j << "\t" << j * j << "\n";
    }
}


int main()
{
    // PoleKola(); // Zadanie 1
    // Dzialania(); // Zadanie 2
    // Specyfikacje(); // Zadanie 3
    // WartośćFunkcji(); // Zadanie 4
    // fun_on_map();
    // Program11(); // Program 11
    // Program12(); // Program 12
    // Program13(); // Program 13
    // Program14(); // Program 14
    // Program15(); // Program 15
    // DrukKwadNat(); // Zadanie 4?
    // ; // Zadanie 5
    // ; // Zadanie 6
    // ; // Zadanie 7
    // ; // Zadanie 8
    return 0;
}