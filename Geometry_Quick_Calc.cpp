#include <iostream>
int main() {

    // Declare Variables

    const double PI = 3.141592653589793; // const double : to define longer decimals & Fixed value
    double width, height, radius;                                       //Values coule be in decimals, do using double
    double rectArea, rectPerimeter, circleArea, circleCircumference;    //Values coule be in decimals, do using double


    //Input
    std::cin >> width >> height >> radius;  


    rectArea = width * height;                  //Area of Rectangle
    rectPerimeter = 2 * (width + height);       //Perimeter of Rectangle

    
    circleArea = PI * radius * radius;          //Area of Circle
    circleCircumference = 2 * PI * radius;      //Circumfrence of Circle



    //RESULT
    std::cout << "RectArea: " << rectArea << std::endl;
    std::cout << "RectPerimeter: " << rectPerimeter << std::endl;
    std::cout << "CircleArea: " << circleArea << std::endl;
    std::cout << "CircleCircumference: " << circleCircumference << std::endl;

    return 0;
}
