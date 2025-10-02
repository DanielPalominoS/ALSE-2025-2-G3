#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {};
    /* Complex(double r) : real(r) {
        imag = 0.0;
    }; */
    /* Complex(const double &im)  {
        real = 1.0;
        imag = im;
    }; */
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
    //getters
    void displayReal(){
        std::cout << real << std::endl;
    }
    void displayImag(){
        std::cout << imag << std::endl;
    }
    double getReal() const {
        return real;
    }
    double getImag() const {
        return imag;
    }
    //setters
    void setReal(double r) {
        real = r;
    }
    void setImag(double i) {
        imag = i;
    }
};

int main() {
    Complex c1;          
    Complex c2(2.3,5.0);    
    Complex c3(4.0);    // Llama a Complex(double im)
    c3.display();

    return 0;
}