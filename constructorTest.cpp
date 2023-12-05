#include <iostream>

class Rectangle
{
    private:
      double length;
      double width;
      double area;

    public:
       Rectangle(double w,double l);
       void calculateArea();
       void display(); 

};


//constructor definition
Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::calculateArea()
{
    area = width * length;
}

void Rectangle::display()
{
    std::cout << "Area of rectangle: " << area << std::endl;
}

int main() 
{

    Rectangle r(20, 40);
    r.calculateArea();
    r.display();

    return 0;
}



