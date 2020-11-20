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
    ~Wektor2D(){};
 
    void setX(double aa) { wspX = aa; };
    int  getX() { return wspX; };
    void setY(double aa) { wspY = aa; };
    int  getY() { return wspY; };
    
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

    ~Wektor2D(){ }
};
  private:
    double wspX;
    double wspY;

};
