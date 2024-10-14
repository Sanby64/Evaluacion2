#include <iostream>

using namespace std;

class Character {
    public:
    int Health;
    int Damage;
    int Defense;
    int Healing;
    int a;
    int d;
    int h;


};
class enemy : public Character {
    public:
    void Attack() {
        cout << "You have attacked and dealt " << Damage << "." << endl;
    }
};

class Player : public Character{
    public:
    void Attack() {
        cout << "You have attacked and dealt " << Damage << "." << endl;
        cin >> a;

    }
    void Defend(int DamageBlocked) {
        Damage -= Defense == DamageBlocked;
        cout << "You have blocked " << DamageBlocked << " of damage." << endl;
        cin >> d;

    }
    void Heal(int HealthGained) {
        Healing += Health = HealthGained;
        cout << "You have regained " << HealthGained << ". Your current health is " << Health << "." << endl;
        cin >> h;
    }
    void Upgrade(enemy Enemies) {
    if (Enemies.Health == 0) {
        Health += 10;
        Damage += 14;
        Defense += 4;
    
    cout << "You have defeated an enemy, you have gained an upgrade to all of your stats." << endl;
    }
    };
    void Combat(enemy Enemies) {
        cout << "A Enemy is blocking your path, do you which to attack(a), defend(d) or heal(h)?" << endl;
        Enemies.Health -= Damage;
        

    }


};

int main(){
    
    string selected;
    Player Steve;
    enemy Enemies[6];
    for (int i = 0; i < 6; i++){
        Enemies[i].Health = 100;
        Enemies[i].Damage = 80;
    }
    Steve.Health = 150;
    Steve.Damage = 70;
    Steve.Defense = 30;
    Steve.Healing = 20;
     Steve.Combat(Enemies[0]);
     cin >> selected;
     for (int i = 0; i < 6; i++){
        Enemies[i].Attack();
    }

     if (selected == "a") {
        Steve.Attack();
     }
     if (selected == "d") {
        Steve.Defend(Steve.Defense);
     }
     if (selected == "h") {
        Steve.Heal(Steve.Health);
     } 
     
     cout << "All enemies have been defeated." << endl;

};

