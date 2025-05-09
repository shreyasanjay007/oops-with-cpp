// OOPS - Classes and Objects

    // C++ --> initially called --> C with classes by Stroustroup
    // classes -> extension of structures in C
    // structures had limitations
                // -Members are public
                // -No methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private and few as public


    // structures in C++ are typedefed
    // you can declare objects along with the class declaration like this:

            /* class Employee{
                code
             } h1, h2, h3; */

    // h1.salary = 8 makes no sense if salary is private

    


#include <iostream>
#include <string>
using namespace std;

class binary {

    string s; //private
    
    public:
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
};

void binary :: read(){
    cout << "Enter a binary number:";
    cin >> s;
}

void binary :: chk_bin(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
           cout << "Incorrect binary format" << endl;
           exit(0);
        }
    }
}

void binary :: ones_complement(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        } else{
            s.at(i) = '0';
        }
    }
    cout << "One's complement = " << s <<endl;
}

int main(){
    //Nesting of member functions

    binary b;
    b.read();
    b.chk_bin();
    b.ones_complement();
    
    return 0;
}