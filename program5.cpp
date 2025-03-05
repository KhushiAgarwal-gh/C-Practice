#include <iostream>

using namespace std;



class Shape {

public:

    void setWidth(int w) {

        Width = w;

    }

    void setHeight(int h) {

        Height = h;

    }

protected:

    int Width, Height;

};



class Rectangle : public Shape {

public:

    int getArea() {

        return (Width * Height);

    }

};



class Triangle : public Shape {

public: 

    float getArea() {

        return (0.5 * Width * Height);

    }

};



class Square : public Shape {

public:

    int getArea() {

        if (Width == Height) {

            return (Width * Height);

        } else {

            cout << "Invalid square dimensions!" << endl;

            return -1; 

        }

    }

};



int main() {

    Rectangle rect;

    Triangle triangle;

    Square square;



    rect.setWidth(5);

    rect.setHeight(7);

    cout << "Area of Rectangle: " << rect.getArea() << endl;



    triangle.setWidth(10);

    triangle.setHeight(6);

    cout << "Area of Triangle: " << triangle.getArea() << endl;



    square.setWidth(9);

    square.setHeight(9); 

    cout << "Area of Square: " << square.getArea() << endl;



    return 0; 

}

#include <iostream>
using namespace std;

class Shape {
public:
    void setWidth(int w) {
        Width = w;
    }
    void setHeight(int h) {
        Height = h;
    }
protected:
    int Width, Height;
};

class Rectangle : public Shape {
public:
    int getArea() {
        return (Width * Height);
    }
};

class Triangle : public Shape {
public: 
    float getArea() {
        return (0.5 * Width * Height);
    }
};

class Square : public Shape {
public:
    int getArea() {
        if (Width == Height) {
            return (Width * Height);
        } else {
            cout << "Invalid square dimensions!" << endl;
            return -1; 
        }
    }
};

int main() {
    Rectangle rect;
    Triangle triangle;
    Square square;

    rect.setWidth(5);
    rect.setHeight(7);
    cout << "Area of Rectangle: " << rect.getArea() << endl;

    triangle.setWidth(10);
    triangle.setHeight(6);
    cout << "Area of Triangle: " << triangle.getArea() << endl;

    square.setWidth(9);
    square.setHeight(9); 
    cout << "Area of Square: " << square.getArea() << endl;

    return 0; 
}