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
    
    Wektor2D operator+(Wektor2D& v1, Wektor2D& v2)
    {
    return Wektor2D wyp((v1.getX() + v2.getX(),v1.getY() + v2.getY());
    }
    double operator*(Wektor2D& v1,Wektor2D& v2)
    {
    return v1.getX() * v2.getX() + v1.getY() * v2.getY();
    }

    ~Wektor2D(){ }
};
  private:
    double wspX;
    double wspY;

};
