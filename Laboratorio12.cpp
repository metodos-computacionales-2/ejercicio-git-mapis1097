#include <iostream>

using namespace std;

int main()
{
    float r,area, perimetro, diametro;
    cout << "Ingrese la longitud del radio: ";
    cin >> r;

    area = 3.1415*r*r;
    perimetro = 2*3.1415*r;
    diametro = 2*r;
    cout << "\nEl area del circulo es: " << area;
    cout << "\nEl perimetro del circulo es: " << perimetro;
    cout << "\nEl diametro del circulo es: " << diametro;

    return 0;
}

