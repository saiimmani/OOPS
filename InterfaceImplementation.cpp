class IAnimal {
public:
    virtual void makeSound() = 0;
};

class Dog : public IAnimal {
public:
    void makeSound() override { cout << "Bark!" << endl; }
};

int main() {
    Dog d;
    d.makeSound();
    return 0;
}
