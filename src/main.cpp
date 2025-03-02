#include <iostream>
#include "Map.h"
#include "Pacman.h"

// Ghost creation and behavior headers
#include "RedGhostFactory.h"
#include "BlueGhostFactory.h"
#include "SpeedBoostDecorator.h"
#include "ChaseStrategy.h"
#include "WanderStrategy.h"

int main() {
    // Render peta permainan
    Map gameMap;
    std::cout << "Game Map:\n";
    gameMap.render();
    std::cout << "\n";

    // Ubah koordinat Pac-Man agar sesuai dengan peta baru (misal di (10, 5))
    Pacman pacman(10, 5);
    std::cout << "Pac-Man starts at (" << pacman.x << ", " << pacman.y << ")\n\n";

    // --- Factory Method ---
    // Membuat RedGhost menggunakan factory dengan default strategy WanderStrategy
    RedGhostFactory redFactory;
    Ghost* redGhost = redFactory.createGhost();
    std::cout << "RedGhost initial move: ";
    redGhost->move();

    // Membuat BlueGhost menggunakan factory dengan default strategy ChaseStrategy
    BlueGhostFactory blueFactory;
    Ghost* blueGhost = blueFactory.createGhost();
    std::cout << "BlueGhost initial move: ";
    blueGhost->move();

    // --- Strategy Pattern ---
    // Mengganti strategy BlueGhost dari ChaseStrategy ke WanderStrategy secara dinamis
    std::cout << "\nSwitching BlueGhost's strategy to WanderStrategy:\n";
    BlueGhost* bGhost = dynamic_cast<BlueGhost*>(blueGhost);
    if (bGhost) {
        bGhost->setStrategy(new WanderStrategy());
        std::cout << "BlueGhost after strategy switch: ";
        bGhost->move();
    }

    // --- Decorator Pattern ---
    // Memberikan efek speed boost sementara pada RedGhost (misalnya setelah Pac-Man makan power pellet)
    std::cout << "\nApplying speed boost to RedGhost:\n";
    Ghost* boostedRedGhost = new SpeedBoostDecorator(redGhost);
    boostedRedGhost->move();

    // Pembersihan memory:
    // boostedRedGhost menghapus redGhost melalui destruktornya, sehingga hanya perlu menghapus boostedRedGhost dan blueGhost
    delete boostedRedGhost;
    delete blueGhost;

    return 0;
}
