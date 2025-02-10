class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) : brand(b) {}
    void showBrand() { cout << "Brand: " << brand << endl; }
};

class Car : public Vehicle {
private:
    int speed;

public:
    Car(string b, int s) : Vehicle(b), speed(s) {}
    void showDetails() {
        showBrand();
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c("Tesla", 200);
    c.showDetails();
    return 0;
}
