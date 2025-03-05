
#include <iostream>
#include <cmath>

#define PI 3.14

class polar {
private:
    double theta; 
    double r;     

public:
  void getdata() {
        std::cout << "Enter radius (r): ";
        std::cin >> r;
        std::cout << "Enter angle (theta in degrees): ";
        double theta_degrees;
        std::cin >> theta_degrees;
        theta = convert(theta_degrees);
    }

    
    void display() {
        std::cout << "Polar Coordinates: (r: " << r << ", θ: " << revert(theta) << " degrees)" << std::endl;
    }

   
    double convert(double degrees) {
        return degrees * (PI / 180.0);
    }
    double revert(double radians) {
        return radians * (180.0 / PI);
    }
};




int main() {
    polar p;
    p.getdata();
    p.display();
    return 0;
}
