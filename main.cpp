#include <iostream>

using namespace std;

class Square
{
public:
    double a;

    Square()
    {
        cout << "Constructor Square Call!" << endl;
        a = 0;
    }

    Square(double a) : Square()
    {
        this->a = a;
    }

    ~Square()
    {
        cout << "Destructor Square Call!" << endl;
        this->a = NULL;
    }

    void ShowInfoSquare()
    {
        cout << "Side a->" << a << endl;
    }
};

class Circle
{
public:
    double r;

    Circle()
    {
        cout << "Constructor Circle Call!" << endl;
        r = 0;
    }

    Circle(double r) : Circle()
    {
        this->r = r;
    }

    ~Circle()
    {
        cout << "Destructor Circle Call!" << endl;
        this->r = NULL;
    }

    void ShowInfoCircle()
    {
        cout << "Radius->" << r << endl;
    }
};

class SquareCircle : public Square, public Circle
{
public:

    SquareCircle(double a, double r) :Square(a), Circle(r)
    {
        this->a = a;
        this->r = r;
    }

    void Info()
    {
        cout << "a = " << a << endl;
        cout << "r = " << r << endl;
    }
};

void main()
{
    SquareCircle squCi_1(1, 2);
    squCi_1.Info();
}
