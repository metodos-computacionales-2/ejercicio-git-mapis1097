#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float intuno,intdos, inttres;
    cout << "Ingrese primer valor entero: ";
    cin >> intuno;
    cout << "Ingrese segundo valor entero: ";
    cin >> intdos;
    cout << "Ingrese segundo valor entero: ";
    cin >> inttres;
    
    if(sqrt((intuno*intuno)+(intdos*intdos))==inttres){
         cout << "\nSi ";
    }
    else if (sqrt((intdos*intdos)+(inttres*inttres))==intuno){
        cout << "\nSi ";
    }
    else if (sqrt((intuno*intuno)+(inttres*inttres))==intdos){
        cout << "\nSi ";
    }
    else {
        cout << "\nNo ";
    }
}