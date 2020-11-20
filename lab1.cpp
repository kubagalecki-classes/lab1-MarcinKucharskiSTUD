#include <iostream>
#include <math.h>
using namespace std;

class Wektor2D
{
public:
    Wektor2D()
    {
        wspX = 0.0;
        wspY = 0.0;
    }
    Wektor2D(double xx, double yy)
    {
        wspX = xx;
        wspY = yy;
    }

    void setX(double aa) { wspX = aa; };
    int  getX() { return wspX; };
    void setY(double aa) { wspY = aa; };
    int  getY() { return wspY; };

    friend Wektor2D operator+(Wektor2D v1, Wektor2D v2)
    {
        return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
    };
    friend double operator*(Wektor2D v1, Wektor2D v2)
    {
        return v1.getX() * v2.getX() + v1.getY() * v2.getY();
    };

private:
    double wspX;
    double wspY;
};

int main()
{
    Wektor2D v1{};         // Konstruktor domyślny, wektor o wsp. [0, 0]
    v1.setX(1.);           // setter
    v1.setY(1.);           // setter
    double x1 = v1.getX(); // getter
    double y1 = v1.getY(); // getter

    Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

    Wektor2D sum = v1 + v2; // dodawanie wektorów

    double prod = v1 * v2; // iloczyn skalarny
}
