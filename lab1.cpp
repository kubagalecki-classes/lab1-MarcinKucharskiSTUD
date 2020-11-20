#include <iostream>
#include <math.h>
using namespace std;

class Wektor2D
{
private:
    double wspX;
    double wspY;
    double modul;

    void norm()
    {
        modul = sqrt(wspX * wspX + wspY * wspY);
        cout << " Modul wektora = " << modul << endl;
    }
    void print() { cout << " Wspolrzedna X: " << wspX << " Wspolrzedna Y: " << wspY << endl; }

    // void num_wek **braklo mi czasu**

public:
    Wektor2D()
    {
        wspX = 1.;
        wspY = 1.0;
        /*out << " wektor domyslny " << endl
             << " Wspolrzedna X: " << wspX << " Wspolrzedna Y: " << wspY << endl; */
    }
    Wektor2D(double xx, double yy)
    {
        wspX = xx;
        wspY = yy;
        // cout << " wektor parametryczny" << endl;
        // cout << " Wspolrzedna X: " << wspX << " Wspolrzedna Y: " << wspY << endl;
    }
    void setX(double aa) { wspX = aa; };
    int  getX()
    {
        // cout << wspX << endl;
        return wspX;
    };
    void setY(double aa) { wspY = aa; };
    int  getY() { return wspY; };

    ~Wektor2D()
    { /*
         cout << " DESTRUKCJA! " << endl;
         cout << " Nauuura wsporzedne x " << wspX << " wsppolrzedne Y " << wspY << endl;
         */
    }
};
void dodawanie_wektorow(Wektor2D v1, Wektor2D v2)
{
    double sumX;
    double sumY;

    sumX = v1.getX() + v2.getX();
    sumY = v1.getY() + v2.getY();
    cout << " Wspolrzedne wypadkowej dodawania: " << sumX << " , " << sumY << endl;
}
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    Wektor2D wyp;
    wyp.setX(v1.getX() + v2.getX());
    wyp.setY(v1.getY() + v2.getY());
    
    return wyp;
}
double operator*(const Wektor2D v1,const Wektor2D v2)
{

    double iloczynSKAL;
    iloczynSKAL = v1.getX() * v2.getX() + v1.getY() * v2.getY();
    return iloczynSKAL;
}

int main()
{
    Wektor2D v1, v2;
    v1.setX(4.);
    v1.setY(2.);
    v2.setX(3.);
    v2.setY(5.);
    v1* v2;
}
