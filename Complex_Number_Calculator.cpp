// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: Complex number calculator
// Program Description: The program calculate the operation in complex number
// Last Modification Date: 19/3/2022
// Author1 and ID and Group: Omar Adel, 20210266, Group A
// Teaching Assistant: xxxxx xxx
// Purpose: calculate the complex number



#include <iostream>
using namespace std;



class ComplexNumber {

    public:
        double real;
        double imaginary;

        void add(ComplexNumber a, ComplexNumber b) {

            //Just add real- and imaginary-parts
            double real = a.real + b.real;
            double imaginary = a.imaginary + b.imaginary;
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a + b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }

        void sub(ComplexNumber a, ComplexNumber b) {

            //Just subtract real- and imaginary-parts
            double real = a.real - b.real;
            double imaginary = a.imaginary - b.imaginary;
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a - b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }

        void multiply(ComplexNumber a, ComplexNumber b) {

            //Use binomial theorem to find formula to multiply complex numbers
            double real = a.real * b.real - a.imaginary * b.imaginary;
            double imaginary = a.imaginary * b.real + a.real * b.imaginary;
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a * b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }


        void divide(ComplexNumber a, ComplexNumber b) {

            //Again binomial theorem
            double real = (a.real * b.real + a.imaginary * b.imaginary) / (b.real * b.real + b.imaginary * b.imaginary);
            double imaginary = (a.imaginary * b.real - a.real * b.imaginary) / (b.real * b.real + b.imaginary * b.imaginary);
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a : b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }

    
    // Constructor to create complex numbers
    
    ComplexNumber(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
};

int main() {

    
    //Variables for the real- and imaginary-parts of
    //two complex numbers
    
    double realA;
    double imaginaryA;
    double realB;
    double imaginaryB;

        
    cout << "Ahlan ya user ya habibi. :)\nenter real(A), imag(A), real(B) and imag(B) >> ";
    cin >> realA >> imaginaryA >> realB >> imaginaryB;
    cout << endl;

    
    // Creation of two objects of the type "ComplexNumber"
    
    ComplexNumber a = ComplexNumber(realA, imaginaryA);
    ComplexNumber b = ComplexNumber(realB, imaginaryB);

    
    //Calling the functions to add, subtract, multiply and 
    //divide the two complex numbers.
    int choice;
    cout<<"Choose the operation you want it: \n1- Addition \n2- Subtract \n3- Multiply \n4- Division \n";
    cin.ignore();
    cin>>choice;

    if(choice == 1){
        a.add(a, b);
    }else if(choice == 2){
        a.sub(a, b);
    }else if(choice == 3){
        a.multiply(a, b);
    }else if(choice == 4){
        a.divide(a, b);
    }else{
        cout<<"Soory!! Enter valid input"<<endl;
        main();
    }


    return 0;
}