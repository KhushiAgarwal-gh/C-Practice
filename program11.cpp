
#include<iostream>
using namespace std;

int main() {
    int r;
    float volume;
    cout << "\nCalculate volume of sphere\n";
    cout << "Input the radius of sphere: ";
    cin >> r;
    volume = (4.0 / 3.0) * 3.14 * r * r * r;
    
    cout << "The volume of the sphere is: " << volume << endl;
    return 0;
}
