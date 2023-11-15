#include <iostream>
using namespace std;

class SuperPower {
  public:
    SuperPower(){}

    virtual void execute() {
      cout << "En utilisant le super pouvoir" << endl;
    }

};

class Levitation : public SuperPower {
    void execute() override {
      cout << "Je lévite" << endl;
    }
};

class SuperHero {
  private:
    SuperPower* super_power;

  public:
    SuperHero(SuperPower* super_power) {
      this->super_power = super_power;
    }

    void use_super_power() {
      this->super_power->execute();
    }

    void set_super_power(SuperPower* power) {
      this->super_power = power;
    }
};

int main() {
  SuperPower super_power;
  SuperHero super_hero(&super_power);
  super_hero.use_super_power();
  
  Levitation levitation;
  super_hero.set_super_power(&levitation);
  super_hero.use_super_power();

  return 0;
}