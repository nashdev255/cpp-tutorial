#include <iostream>

class Character {
  protected:
    std::string name;

  public:
    Character(std::string name = "404") : name(name) {}
    virtual ~Character() {}

    virtual void action() = 0;

};

class Fighter : public Character {
  private:

  public:
    Fighter(std::string name) : Character(name) {}
    virtual ~Fighter() {}

    void action() {
      std::cout << this->name << " used slash." << std::endl;
    }

};

class Mage : public Character {
  private:

  public:
    Mage(std::string name) : Character(name) {}
    virtual ~Mage() {}

    void action() {
      std::cout << this->name << " used magic." << std::endl;
    }

};

void battle(Character* character);

int main() {
  Fighter fighter("nashdev255");
  battle(&fighter);
  return 0;
}

void battle(Character* character) {
  character->action();
}
