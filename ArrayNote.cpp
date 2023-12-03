
#include <algorithm>
#include <iostream>
using namespace std;

class Student
{

        private:
           int indexNo;
           int age;

        public:
           Student();
           Student(int pindex);
           void inputData(int pindex, int page);
           void print();
    
};

Student::Student()
{


}

Student::Student(int pindex)
{
    indexNo = pindex;
    //age = page;
}
void Student::inputData(int pindex, int page)
{
    indexNo = pindex;
    age = page;
}

void Student::print()
{
    cout << "Your index is:  " << indexNo <<endl;
    cout << "Your age is:  " << age <<endl;
}

int main() {
     
    Student s1;
    Student s2;
    Student s3(5);
    s1.inputData(2,6);
    s2.inputData(1,4);
    s1.print();
    s2.print();
    s3.print();
    return 0;
}