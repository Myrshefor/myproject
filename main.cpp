#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
protected:
    string name;
    int weight;

public:
    Animal(string n, int w) : name(n), weight(w) {}

    virtual ~Animal() {};

    virtual void print() {};
};

class Cat : public Animal
{
private:
    string breed;

public:
    Cat(string n, int w, string b) : Animal(n, w), breed(b) {}

    virtual ~Cat() {};

    virtual void print()
    {
        cout << "Cat: " << name << ", Weight: " << weight << " kg, Breed: " << breed << endl;
    }
};

class Dog : public Animal
{
private:
    string breed;

public:
    Dog(string n, int w, string b) : Animal(n, w), breed(b) {}

    virtual ~Dog() {};

    virtual void print()
    {
        cout << "Dog: " << name << ", Weight: " << weight << " kg, Breed: " << breed << endl;
    }
};

int main()
{
    vector<Animal*> V;

    V.push_back(new Cat("Bobik", 5, "Bengal"));
    V.push_back(new Dog("Lolik", 10, "Chihyahyinia"));

    for (int i =0; i<V.size(); i++)
    {
        V[i]->print();
    }



    return 0;
}
