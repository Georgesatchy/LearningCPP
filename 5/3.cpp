#include <iostream>

using namespace std;

class Thing {
private:
    string name, description;
public:
    string getName () {
        return name;
    }
    string getDescription() {
        return description;
    }
    int getStrength() {

    }
};

class Entity: public Thing {
private:
    int strength = getStrength();
    int life;
public:
    int getStrength() {
        return strength;
    }
    int getLife() {
        return life;
    }
    void fight() {

    }
};

class Weapon: public Thing {
private:
    int strength = getStrength();
public:
    int getStrength() {
        return strength;
    }
};

class Monster: public Weapon {
private:
    int xp;
public:
    void fight() {

    }
    int getXp(int strength) {
        return xp;
    }
};

class Hero: public Weapon {
private:
    int* weapons;
    int currentWeapon;
private:
    int selectWeapon() {

    }
    void fight(Monster enemy) {

    }
    int pickup(Weapon weapon) {

    }
};

int main() {

}