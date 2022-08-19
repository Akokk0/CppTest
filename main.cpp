#include <iostream>
#include <deque>

using namespace std;

class Person {

public:

    int age;
    std::string name;

public:

    Person(int age, const string &name) : age(age), name(name) {}

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Person::name = name;
    }

    const Person& operator+(const Person &p2) {

        this->age += p2.age;

        return *this;

    }

    Person& operator++() {

        this->age++;
        return *this;

    }

};

int & getInt(int &age) {

    return age;

}


template<class Name = string , class Age = int>
class Human{

public:

    Human(Name name, Age age) : name(name), age(age) {}

    Name name;
    Age age;

};

int (*func (int (*fp)(), void (*ffp)(char (*abc) () ) ) ) () {

}

void (*fun(int a, int b))(int c, int d) {
}

void printDeque(const deque<int> &de) {

    de.begin();

}

//int a = 200;

void (*test20(string c, string d))(int a, int b) {
    void (*fp)(int a, int h);
    return fp;
}

void test21(int c, int d) {

    cout << c + d << endl;

}

int (*test22(string name))(char, double) {
    int (*fn)(char, double);
    return fn;
}

int main() {

    //typedef int (*F)(char, double);
    using F = int (*)(char, double);

    F (*f)(string) = test22;
    int (*(*ff)(string))(char, double) = test22;

    /*Person p1(18, "张三");
    Person p2(19, "李四");

    Human<> human("张三", 20);

    int qwe = 1;*/

    /*void (*fp)(int c, int d);

    fp = test21;

    cout << *fp << endl;

    void ( *fp(*(string c, string d) )(int a, int b) = &test20;

    cout << *fp << endl;*/

    /*void (*aa (int a, int b) ) ();



    //(p1 + p2)++;

    p1.age = 20;

    cout << p1.age << endl;

    //std::cout << "Hello, World!" << std::endl;

    int a = 10;*/



    return 0;
}
