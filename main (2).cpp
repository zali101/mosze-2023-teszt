#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // hib�s: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // V�g�r�l hi�nyzik: ;
    for (int i = 0;) // Z�r�jelen bel�l hi�nyzik: i; i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //V�g�r�l hi�nyzik: ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i] // hi�nyzik v�g�r�l: ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
