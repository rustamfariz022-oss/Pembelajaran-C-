#include <iostream>
using namespace std;

int main() {
    int monsterHP = 25;
    int attackDamage = 15;
    cout << "=== BATTLE SIMULATOR ===\n";
    cout << "HP Monster: " << monsterHP << "\n\n";
    while (monsterHP > 0) {
        cout << "Kamu menyerang monster! (-" << attackDamage << " HP)\n";
        monsterHP -= attackDamage; 
        if (monsterHP <= 0) {
            cout << "Monster tewas! Kamu menang!\n";
        } else {
            cout << "Sisa HP Monster: " << monsterHP << "\n\n";
        }
    }

    return 0;
}