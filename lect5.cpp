#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setId(void);
        void getId(void);
};

void Employee :: setId(){
    cout << "Enter emp id : " ;
    cin >> id ;
    salary = 1000;
}

void Employee :: getId(){
    cout << "Emp id is " << id << endl;
}

int main(){
    Employee fb[4];
    for(int i=0; i<4; i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}