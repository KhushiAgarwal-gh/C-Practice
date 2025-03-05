#include <iostream>
using namespace std;

class Complex {
private:
    int a, b; 
public:
    void read() {
        cout << "Input the complex number (real and imaginary parts): ";
        cin >> a >> b;
    }
    
    void print() const {
        cout << a << " + " << b << "i" << endl;
    }
    
    Complex add(const Complex &c2) const {
        Complex result;
        result.a = a + c2.a;
        result.b = b + c2.b;
        return result;
    }

    Complex multi(const Complex &c2) const {
        Complex result;
        result.a = (a * c2.a) - (b * c2.b);
        result.b = (a * c2.b) + (b * c2.a);
        return result;
    }
};

int main() {
    Complex c1, c2, sum, product;
    
    c1.read();
    cout << "First complex number: ";
    c1.print();

    cout << "Enter the second complex number: ";
    c2.read();
    cout << "Second complex number: ";
    c2.print();

    sum = c1.add(c2);
    product = c1.multi(c2);

    cout << "Sum: ";
    sum.print(); 
    cout << "Product: ";
    product.print(); 

    return 0;
}