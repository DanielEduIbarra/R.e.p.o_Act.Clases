
// Tarifa de Luz Eléctrica
// Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int consumo;
    string Tarifa;

    cout << " por favor digite su tarifa  " << endl;
    cin >> consumo;

    if (consumo <= 100)

    {
        Tarifa = 0.192255;
        cout << " su tarifa es baja" << endl;
    }
    else if (consumo >= 100 && consumo <= 200)
    {
        Tarifa = 0.192266;
        cout << " su tarifa es media " << endl;
    }
    else if (consumo >= 200)
    {
        Tarifa = 0.190757;
        cout << "Su tarifa es alta" << endl;
    }
    else
    {
        cout << " Invalido vuelva a digitar su tarifa " << endl;
    }

    cout << " su consumo es  de; " << consumo << "Khw; " << endl;
    cout << " La tarifa por consumo es de; " << Tarifa << endl;

    return 0;
}