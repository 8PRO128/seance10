#include <iostream>
using namespace std;

class Delegate {
  public:
    Delegate(){}

    void action() {
      cout << "Action de la classe Delegate" << endl;
    }

};

class Delegator {
  private:
    Delegate delegate;

  public:
    Delegator(Delegate delegate) {
      this->delegate = delegate;
    }

    void action() {
      this->delegate.action();
    }
};

int main() {
  Delegate delegate;
  Delegator delegator(delegate);

  delegator.action();

  return 0;
}