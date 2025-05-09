#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;


    //Below line means sumComplex function can access private members of class Complex without itself being a member function
    friend Complex sumComplex(Complex o1, Complex o2);

    public:
        void setNumber(int v1, int v2){
            a = v1;
            b = v2;
        }

        void printNumber(){
            cout << "Complex Number is " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,2);
    c1.printNumber();
    c2.setNumber(3,4);
    c2.printNumber();
    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}

//Properties of Friend Function

/*
1.Not in the scope of class
2.Since it is not in the scope of the class , it can't be called from the object of that class. That is c1.sumComplex() is INVALID!
3.Can be invoked without the help of any object
4.Usually contains the arguments as objects
5.Can be declared in either public or private section of the class
6.It cannot access the members directly by their names and need object_name.member_name to access any member
*/