#include <bits/stdc++.h>

using namespace std;

class Student{
public:
    int age;
    string name;
    long long gpa;
public:
    Student(int age, string name, long long gpa);
    void print();
    void getinf(int age, string name, long long gpa);
    void setinf(int age, string name, long long gpa);
};

Student::Student(int x, string y, long long z){
    age = x;
    name = y;
    gpa = z;
}

void Student::print(){
    cout << age << " " << name << " " << gpa << endl;
}

void Student::getinf(int age, string name, long long gpa){
    this->age = age;
    this->name = name;
    this->gpa = gpa;
}

void Student::setinf(int age, string name, long long gpa){

}

int main(){
    Student A(20,"A",3.2);
   // cout << A.age << " " << A.name << " " << A.gpa << endl;
   A.print();
    return 0;
}