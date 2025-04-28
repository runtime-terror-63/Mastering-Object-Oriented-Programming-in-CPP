#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void shape() = 0;  // pure virtual
};

class Circle : public Shape {
public:
    void shape() override {  // Correct override
        cout << "drawing circle\n";
    }
};

class Triangle : public Shape{
  public:
  void shape() override{
    cout<<"Drwaing Traingle\n";
  }
};

int main() {
    Triangle c1;
    c1.shape();
}
