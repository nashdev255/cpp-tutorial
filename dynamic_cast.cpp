#include <iostream>

class Character;
class Fighter;
class Mage;

void battle(Character* character);


class Character {
  protected:
    std::string name;

  public:
    Character(std::string name) : name(name) {}
    virtual ~Character() {}

};

class Fighter : public Character {
  private:

  public:
    Fighter(std::string name) : Character(name) {}
    virtual ~Fighter() {}

    void slash() {
      std::cout << this->name << " used slash." << std::endl;
    }
};

class Mage : public Character {
  private:

  public:
    Mage(std::string name) : Character(name) {}
    virtual ~Mage() {}

    void magic() {
      std::cout << this->name << " used magic." << std::endl;
    }
};

int main() {
  Fighter fighter("nashdev255");
  battle(&fighter);
  return 0;
}

void battle(Character* character) {
  Fighter* fighter = dynamic_cast<Fighter*>(character);
  Mage* mage = dynamic_cast<Mage*>(character);

  if (fighter) {
    fighter->slash();
  }
  if (mage) {
    mage->magic();
  }
}
