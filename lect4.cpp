#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count; //default value is 0 static var = class var
    //  int count = 0;

    public : 
        void getData(void);
        void setData(void);
        static void getCount();
};

void Employee :: getData(){
    cout << "Enter employee id : " ;
    cin >> id;
    count++;
}

void Employee :: setData(){
    cout << "Emp ID = " << id << " Emp Num = " << count << endl;
}

int Employee :: count; 

void Employee :: getCount(){
    cout << "The value of count is " << count << endl;
    // cout << id // throws an error
}

int main () {
    Employee e1,e2,e3;
    e1.getData();
    e1.setData();
    Employee :: getCount();
    
    e2.getData();
    e2.setData();
    Employee :: getCount();
    
    e3.getData();
    e3.setData();
    Employee :: getCount();

    return 0;

}