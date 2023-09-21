#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // hibás: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // Végérõl hiányzik: ;
    for (int i = 0;) // Zárójelen belül hiányzik: i; i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //Végérõl hiányzik: ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i] // hiányzik végérõl: ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
