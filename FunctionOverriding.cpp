class Parent {
public:
    virtual void show() { cout << "Parent class" << endl; }
};

class Child : public Parent {
public:
    void show() override { cout << "Child class" << endl; }
};

int main() {
    Parent* p;
    Child c;
    p = &c;
    p->show();
    return 0;
}
